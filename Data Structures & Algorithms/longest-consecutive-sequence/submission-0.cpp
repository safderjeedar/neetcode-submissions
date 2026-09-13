class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        int cnt = 0;
        int mx = 0;
        int prev = -1;
        for(auto it:mp){
           if(it.first - prev==1){
               cnt++;
               mx = max(mx,cnt);
           }else{
               cnt=1;
           }
            prev = it.first;
        }
        mx = max(mx,cnt);
        return mx;
    }
};
