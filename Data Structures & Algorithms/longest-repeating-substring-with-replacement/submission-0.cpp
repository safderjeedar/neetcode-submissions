class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int freq[26]={};
        int maxF = 0;
        int ans = 0;
        int j = 0;
        for(int i=0;i<n;i++){
           freq[s[i]-'A']++;
           maxF = max(maxF,freq[s[i]-'A']);
           while((i-j+1)-maxF>k){
              freq[s[j]-'A']--;
              j++;
           }
           ans = max(ans,i-j+1);
        }
        return ans;
    }
};
