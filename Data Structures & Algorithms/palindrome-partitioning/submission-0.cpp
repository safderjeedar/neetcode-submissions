class Solution {
public:

bool isPalindrome(string str){
    int n = str.length();
    int i=0;
    int j= n-1;
    while(i<j){
        if(str[i++]!=str[j--])
           return false;
    }
    return true;
}
void fun(int idx,vector<string>&v,string s,vector<vector<string>>&ans){
   if(idx==s.length()){
       ans.push_back(v);
       return;
   }

    for(int i=idx;i<s.length();i++){
        if(isPalindrome(s.substr(idx,i-idx+1))){
            v.push_back(s.substr(idx,i-idx+1));
            fun(i+1,v,s,ans);
            v.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        fun(0,v,s,ans);
        return ans; 
    }
};
