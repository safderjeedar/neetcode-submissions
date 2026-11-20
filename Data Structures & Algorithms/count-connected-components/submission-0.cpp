class Solution {
public:

void dfs(int i, vector<vector<int>>&v,vector<int>&vis){
    vis[i]=1;
    for(auto it:v[i]){
        if(vis[it]==-1){
            dfs(it,v,vis);
        }
    }
}
    int countComponents(int n, vector<vector<int>>& edges) {
       vector<vector<int>> v(n);
       for(auto it:edges){
          v[it[0]].push_back(it[1]);
          v[it[1]].push_back(it[0]);
       }
       vector<int> vis(n,-1);
       int cnt=0;
       for(int i=0;i<n;i++){
          if(vis[i]==-1){
              cnt++;
              dfs(i,v,vis);
          }
       }
       return cnt;
    }
};
