class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(int i=0;i<n;i++){
            freq1[s1[i]-'a']++;
        }
        int i = 0;
        for(int j=0;j<m;j++){
            freq2[s2[j]-'a']++;
            if(j-i+1>n){
                freq2[s2[i]-'a']--;
                i++;
            }
            if(j-i+1==n && freq1==freq2){
              return true;
            }
        }
        return false;
    }
};
