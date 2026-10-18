class Solution {
public:
void fun(int idx, vector<int>&nums,vector<int>&v,vector<vector<int>>&ans,vector<int>&freq){
    if(v.size()==nums.size()){
        ans.push_back(v);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(freq[i]!=1){
            v.push_back(nums[i]);
            freq[i]=1;
            fun(idx+1,nums,v,ans,freq);
            freq[i]=0;
            v.pop_back();
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>freq(nums.size(),0);
        vector<vector<int>> ans;
        vector<int> v;
        fun(0,nums,v,ans,freq);
        return ans;
    }
};
