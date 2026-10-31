class Solution {
    int fun(int mid,int[] piles){
        int total=0;
        for(int i=0;i<piles.length;i++){
            total+=(mid+piles[i]-1)/mid;
        }
        return total;
    }
    public int minEatingSpeed(int[] piles, int h) {
        int low = 1;
        int high = Integer.MAX_VALUE;
        int ans=0;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(fun(mid,piles)<=h){
                ans= mid;
                high = mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
}
