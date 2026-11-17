class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
                    q.push({i, j});
                }
            }
        }
        while(!q.empty()){
          pair<int,int> node = q.front();
          q.pop();
          int x = node.first;
          int y = node.second;
          int dx[4] = {-1,1,0,0};
          int dy[4] = {0,0,-1,1};
          for(int i=0;i<4;i++){
             int X = x+dx[i];
             int Y = y+dy[i];
             if(X>=0 && Y>=0 && X<n && Y<m && grid[X][Y]==INT_MAX){
                q.push({X,Y});
                grid[X][Y] = grid[x][y]+1;
             }
          }
    }
    }
};
