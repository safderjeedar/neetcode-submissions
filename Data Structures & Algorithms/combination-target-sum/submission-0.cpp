class Solution {
public:

void fun(int idx, vector<int>&nums,int target,vector<int>&v,vector<vector<int>>&ans){
    if(idx==nums.size()){
        if(target==0){
            ans.push_back(v);
        }
       return;
    }
    if(nums[idx]<=target){
    v.push_back(nums[idx]);
    fun(idx,nums,target-nums[idx],v,ans);
    v.pop_back();
    }
    fun(idx+1,nums,target,v,ans);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
       vector<vector<int>> ans;
       vector<int> v;
       fun(0,nums,target,v,ans);  
       return ans;
    }
};
