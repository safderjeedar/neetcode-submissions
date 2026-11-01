class Solution {
    int dp[] = new int[50];
    int fun(int n){
        if(n<=0)
          return 0;
        if(n<=2)
          return n;
        if(dp[n]!=-1)
          return dp[n];
        dp[n] = fun(n-1)+fun(n-2);
        return dp[n];
    }
    public int climbStairs(int n) {
        Arrays.fill(dp,-1);
        return fun(n);
    }
}
