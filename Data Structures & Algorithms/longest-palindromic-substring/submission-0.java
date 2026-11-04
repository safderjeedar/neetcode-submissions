class Solution {
    boolean fun(String s,int i,int j){
        if(i>=j)
          return true;
        if(s.charAt(i)!=s.charAt(j))
          return false;
        return fun(s,i+1,j-1);
    }
    public String longestPalindrome(String s) {
       int n = s.length();
       int maxLen = 0;
       int start = 0;
       for(int i=0;i<n;i++){
         for(int j=i;j<n;j++){
             if(fun(s,i,j)==true && j-i+1>maxLen){
                 maxLen = j-i+1;
                 start = i;
             }
         }
       }
       return s.substring(start,start+maxLen);
    }
}
