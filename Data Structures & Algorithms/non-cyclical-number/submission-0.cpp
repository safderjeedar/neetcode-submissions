class Solution {
public:

int fun(int n){
    int sum = 0;
    while(n){
        int digit = n%10;
        sum+=digit*digit;
        n=n/10;
    }
    return sum;
}
    bool isHappy(int n) {
        map<int,int> mp;
        int sum = n;
        while(1){
            sum = fun(sum);
            if(sum==1)
             return true;
            if(mp.find(sum)!=mp.end())
              return false;
            mp[sum]++;
        }
        return true;
    }
    
};
