class Solution {
    int [][] dp = new int[15][10007];
    int fun(int idx,int[]coins,int amount){
        if(amount==0)
          return 0;
        if(amount<0 || idx>=coins.length)
          return Integer.MAX_VALUE;
        if(dp[idx][amount]!=-1)
          return dp[idx][amount];
        int notPick = fun(idx+1,coins,amount);
        int pick = Integer.MAX_VALUE;
        if(coins[idx]<=amount){
         pick = fun(idx,coins,amount-coins[idx]);
         if(pick!=Integer.MAX_VALUE)
            pick = pick+1;
        }
        dp[idx][amount] = Math.min(pick,notPick);
        return dp[idx][amount];
    }
    public int coinChange(int[] coins, int amount) {

            for (int[] row : dp) {
                Arrays.fill(row, -1);
            }
        int ans = fun(0,coins,amount);
        if(ans==Integer.MAX_VALUE)
           return -1;
        return ans;
    }
}
