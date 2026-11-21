class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int t=0;
        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};
        while(!q.empty()){
            int sz = q.size();
            bool rotten = false;
            while(sz--){
                pair<int,int> node = q.front();
                q.pop();
                int x = node.first;
                int y = node.second;
                for(int i=0;i<4;i++){
                     int X=x+dx[i];
                     int Y=y+dy[i];
                if(X<0||Y<0||X>=n ||Y>=m || grid[X][Y]!=1)
                   continue;
                q.push({X,Y});
                grid[X][Y]=2;
                rotten = true;
                }
            }
            if(rotten)
              t++;
        }
        int flag = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    flag = true;
                    break;
                }
            }
        }
        return flag==true?-1:t;
    }
};
