class Solution {
public:
struct cmp{
   bool operator()(pair<int,int> a, pair<int,int>b){
    int x1 = a.first;
    int y1 = a.second;
    int x2 = b.first;
    int y2 = b.second;
    int d1 = x1*x1 + y1*y1;
    int d2 = x2*x2 + y2*y2;
    return d1<d2;
  }
};
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
        for(auto it:points){
            pq.push({it[0],it[1]});
            if(pq.size()>k)
             pq.pop();
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            pair<int,int> top = pq.top();
            pq.pop();
            ans.push_back({top.first,top.second});
        }
        return ans;
    }
};
