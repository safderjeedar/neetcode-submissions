class Solution {

   void dfs(int x,int y,int[][]heights,int[][]visited){
      int n = visited.length;
      int m = visited[0].length;
      visited[x][y]=1;
      int dx[]={1,-1,0,0};
      int dy[]={0,0,1,-1};
      for(int i=0;i<4;i++){
         int X = x+dx[i];
         int Y = y+dy[i];
         if(X>=0 && Y>=0 && X<n && Y<m && visited[X][Y]==-1&& heights[X][Y]>=heights[x][y]){
            dfs(X,Y,heights,visited);
         }
      }
   }
    public List<List<Integer>> pacificAtlantic(int[][] heights) {
        int n = heights.length;
        int m = heights[0].length;
        int[][] pacific = new int[n][m];
        int[][] atlantic = new int[n][m];
        for(int[] rows:pacific)
           Arrays.fill(rows,-1);
        
        for(int[] rows:atlantic)
            Arrays.fill(rows,-1);

        for(int i=0;i<n;i++){
           dfs(i,0,heights,pacific);
        }
        for(int j=0;j<m;j++){
            dfs(0,j,heights,pacific);
        }
         for(int i=0;i<n;i++){
           dfs(i,m-1,heights,atlantic);
        }
        for(int j=0;j<m;j++){
            dfs(n-1,j,heights,atlantic);
        }
        List<List<Integer>> ans = new ArrayList<>();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(pacific[i][j]!=-1 && atlantic[i][j]!=-1){
                    ans.add(Arrays.asList(i,j));
                }
            }
        }
        return ans;
    }
}
