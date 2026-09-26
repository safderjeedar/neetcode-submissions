class Solution {
public:

bool fun(vector<int>& piles, int h,int mid){
   long long s = 0;
    for(auto it:piles){
        s+=(it+mid-1)/mid;
    }
    return s<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        long long n = piles.size();
        long long low=1;
        long long  high = 1e9+7;
        long long ans = high;
        while(low<=high){
            long long mid = low+(high-low)/2;
            if(fun(piles,h,mid)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;

    }
};
 