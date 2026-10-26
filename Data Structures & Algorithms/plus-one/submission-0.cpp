class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int i = n-1;
        int sum = digits[i]+1;
        int carry=sum/10;
        vector<int> ans;
        ans.push_back(sum%10);
        i--;
        while(i>=0){
            sum = digits[i]+carry;
            carry = sum/10;
            sum=sum%10;
            ans.push_back(sum);
            i--;
        }
        if(carry)
          ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
