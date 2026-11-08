class Solution {
    int [] dp = new int[105];
int fun (int idx, String s){
    if(idx==s.length())
       return 1;
    if(s.charAt(idx)=='0')
       return 0;
    if(dp[idx]!=-1)
      return dp[idx];
    int pickOne = fun(idx+1,s);
    int pickTwo = 0;
    if(idx+1<s.length() && (s.charAt(idx)=='1'||s.charAt(idx)=='2'&& s.charAt(idx+1)<='6'))
    pickTwo = fun(idx+2,s);
    dp[idx] = pickOne+pickTwo;
    return dp[idx];
}
    public int numDecodings(String s) {
        Arrays.fill(dp,-1);
        return fun(0,s);
    }
}
