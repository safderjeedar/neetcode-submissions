class Solution {
    int [][] dp = new int[105][2];
    int fun(int idx,int n,int prev,int []nums){
        if(idx>=n)
           return 0;
        if(dp[idx][prev]!=-1)
          return dp[idx][prev];
        int notpick = fun(idx+1,n,0,nums);
        int pick = 0;
        if(prev==0)
          pick = nums[idx]+fun(idx+1,n,1,nums);
        dp[idx][prev] = Math.max(pick,notpick);
        return dp[idx][prev];
    }
    public int rob(int[] nums) {
       for(int[] row:dp){
          Arrays.fill(row,-1);
       }
       int n = nums.length;
       if(n==1)
         return nums[0];
       int a = fun(0,n-1,0,nums);
       for(int[] row:dp){
          Arrays.fill(row,-1);
       }
       for(int[] row:dp){
          Arrays.fill(row,-1);
       }
       int b = fun(1,n,0,nums);
       return Math.max(a,b);
    }
}
