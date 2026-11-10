class Solution {
int dp[][] = new int[105][50005];
int fun(int idx,int[]nums,int sum){
    if(sum==0)
      return 1;
    if(idx>=nums.length || sum<0)
       return 0;
    if(dp[idx][sum]!=-1)
      return dp[idx][sum];
    int pick = fun(idx+1,nums,sum-nums[idx]);
    int notPick = fun(idx+1,nums,sum);
    dp[idx][sum] = (pick==1 || notPick==1)?1:0;
    return dp[idx][sum];
}
    public boolean canPartition(int[] nums) {
        for(int [] row:dp)
          Arrays.fill(row,-1);
        int sum = 0;
        for(int i:nums)
           sum+=i;
        if(sum%2==1)
          return false;
        int val = fun(0,nums,sum/2);
        if(val==1)
          return true;
        return false;
    }
}
