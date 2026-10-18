class Solution {
public:
void fun(int idx,vector<int>&candidates,int target,vector<int>&v,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(v);
            return;
        }
    for(int i=idx;i<candidates.size();i++){
        if(i>idx && candidates[i]==candidates[i-1])continue;
        if(candidates[i]>target) break;
        v.push_back(candidates[i]);
        fun(i+1,candidates,target-candidates[i],v,ans);
        v.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        fun(0,candidates,target,v,ans);
        return ans;
    }
};
