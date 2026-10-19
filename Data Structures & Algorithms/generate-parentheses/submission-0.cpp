class Solution {
public:
bool isValid(string s){
    stack<char>st;
    for(auto it:s){
        if(it=='(')
         st.push('(');
        else{
            if(st.empty())
              return false;
            else{
                st.pop();
            }
        }
    }
    return st.empty();
}
void fun(int idx,int n,string s,vector<string>&ans){
    if(idx==2*n){
        if(isValid(s)) {
            ans.push_back(s);
        }
        return;
    }
    s+='(';
    fun(idx+1,n,s,ans);
    s.pop_back();
    s+=')';
    fun(idx+1,n,s,ans);
}
    vector<string> generateParenthesis(int n) {
       string s="";
       vector<string> ans;
       fun(0,n,s,ans);
       return ans;
    }
};
