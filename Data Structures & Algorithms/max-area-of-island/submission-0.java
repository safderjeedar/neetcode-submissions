class Solution {

int dfs(int i,int j,int[][] grid){
    int n = grid.length;
    int m = grid[0].length;
    if(i<0 || j<0 || i>=n || j>=m || grid[i][j]!=1){
         return 0;
    }
    int cnt = 1;
    grid[i][j]=0;
    cnt+= dfs(i+1,j,grid);
    cnt+=dfs(i-1,j,grid);
    cnt+=dfs(i,j+1,grid);
    cnt+=dfs(i,j-1,grid);
    return cnt;
}
    public int maxAreaOfIsland(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                   int cnt = dfs(i,j,grid);
                    ans = Math.max(ans,cnt);
                }
                  
            }
        }
        return ans;
    }
}
