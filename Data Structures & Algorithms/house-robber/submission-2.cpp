class Solution {
public:
int dp[105][2];
int fun(int idx,bool prev,vector<int>&nums){
    if(idx>=nums.size())
      return 0;
    if(dp[idx][prev]!=-1)
      return dp[idx][prev];
    int notpick = fun(idx+1,false,nums);
    int pick = 0;
    if(!prev){
        pick = nums[idx]+fun(idx+1,true,nums);
    }
    dp[idx][prev]= max(pick,notpick);
    return dp[idx][prev];
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
          return nums[0];
        for(int i=0;i<105;i++){
           dp[i][0]=-1;
           dp[i][1]=-1;
        }
        return fun(0,false,nums);
    }
};
