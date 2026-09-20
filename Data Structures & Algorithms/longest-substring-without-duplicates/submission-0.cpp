class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        map<char,int> freq;
        int ans = 0;
        int j = 0;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            while(freq[s[i]]>1){
               freq[s[j]]--;
               j++;
            }
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};
