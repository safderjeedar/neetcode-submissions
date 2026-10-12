class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int> mp;
        for(auto it:tasks)
           mp[it]++;
        priority_queue<int> pq;
        for(auto it:mp){
            pq.push({it.second});
        }
        int time=0;
        while(!pq.empty()){
            vector<int>temp;
            for(int i=0;i<=n;i++){
                if(!pq.empty()){
                int freq = pq.top();
                pq.pop();
                freq--;
                temp.push_back(freq);
                }
            }
            for(int i=0;i<temp.size();i++){
                if(temp[i]>0)
                  pq.push(temp[i]);
            }
            if(pq.empty()){
                time+=temp.size();
            }else{
                time+=n+1;
            }
        }
      return time;
        
    }
};
