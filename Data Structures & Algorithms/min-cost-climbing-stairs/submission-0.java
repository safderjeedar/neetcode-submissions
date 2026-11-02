class Solution {
    int dp[] = new int[105];
    int fun(int idx,int[] cost){
        int n = cost.length;
        if(idx>=n)
          return 0;
        if(dp[idx]!=-1)
           return dp[idx];
        dp[idx]= Math.min(cost[idx]+fun(idx+1,cost),cost[idx]+fun(idx+2,cost));
        return dp[idx];
    }
    public int minCostClimbingStairs(int[] cost) {
        Arrays.fill(dp,-1);
        if(cost.length==1)
          return cost[0];
        return Math.min(fun(0,cost),fun(1,cost));
    }
}
