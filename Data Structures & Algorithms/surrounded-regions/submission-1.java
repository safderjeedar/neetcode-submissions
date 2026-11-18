class Solution {

void dfs(int i, int j, char[][]grid){
   int n = grid.length;
   int m = grid[0].length; 
   if(i<0 || j<0 || i>=n || j>=m || grid[i][j]!='O')
     return;
    grid[i][j]='Y';
    dfs(i+1,j,grid);
    dfs(i-1,j,grid);
    dfs(i,j+1,grid);
    dfs(i,j-1,grid);
}
    public void solve(char[][] board) {
        int n = board.length;
        int m = board[0].length;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0 || i==n-1 || j==m-1){
                    dfs(i,j,board);
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    if(board[i][j]=='Y')
                      board[i][j]='O';
                else if(board[i][j]=='O')
                      board[i][j]='X';
                
            }
        }
    }
}
