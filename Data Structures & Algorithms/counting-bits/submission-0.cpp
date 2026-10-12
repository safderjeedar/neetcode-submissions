class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
             int cnt =0;
             int N =i;
            while(N>0){
                cnt+=N&1;
                N=N>>1;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
