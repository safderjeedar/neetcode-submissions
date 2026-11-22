class Solution {
    public int orangesRotting(int[][] grid) {
        Queue<int[]> q = new LinkedList<>();
        int n = grid.length;
        int m = grid[0].length;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.add(new int[]{i,j});
                }
            }
        }
        int t=0;
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        while(!q.isEmpty()){
           int sz = q.size();
           boolean rotten = false;
           while(sz-->0){
              int[] node = q.poll();
              for(int i=0;i<4;i++){
                 int X = node[0]+dx[i];
                 int Y = node[1]+dy[i];
                 if(X<0 ||Y<0 ||X>=n || Y>=m || grid[X][Y]!=1)
                    continue;
                     q.add(new int[]{X,Y});
                     grid[X][Y]=2;
                     rotten = true;
              }
           }
           if(rotten)
             t++;
        }
        boolean flag = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                   flag = true;
            }
        }
        return flag==true?-1:t;
    }
}
