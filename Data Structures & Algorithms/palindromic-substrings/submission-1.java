class Solution {

int dp[][] = new int[1005][1005];
int fun(String s,int i,int j){
    if(i>=j)
      return 1;
    if(dp[i][j]!=-1)
       return dp[i][j];
    if(s.charAt(i)!=s.charAt(j))
       return 0;
    dp[i][j] = fun(s,i+1,j-1);
    return dp[i][j];
}
    public int countSubstrings(String s) {
        int n = s.length();
        int cnt = 0;
        for(int [] row:dp){
            Arrays.fill(row,-1);
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(fun(s,i,j)==1)
                  cnt++;
            }
        }
        return cnt;
    }
}
