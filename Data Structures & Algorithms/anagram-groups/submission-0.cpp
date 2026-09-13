class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>> mp;
        for(auto it:strs){
            string str = it;
            sort(it.begin(),it.end());
            vector<string> anagrams;
            if(mp.find(it)!=mp.end()){
                anagrams = mp[it];
                anagrams.push_back(str);
                mp[it]=anagrams;
            }else{
                mp[it] = {str};
            }

        }
        for(auto it:mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};
