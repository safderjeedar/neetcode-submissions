class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long mul = 1;
        int  zeros = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0){
               zeros++;
            }else{
            mul = mul*nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(zeros>1)
                  nums[i]=0;
                else
                  nums[i]=mul;
            }
            else{
               if(zeros){
                nums[i] = 0;
               }else{
                  nums[i] = mul/nums[i];
               }
            }
           
        }
        return nums;
    }
};
