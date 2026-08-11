class Solution {
public:
    string frequencySort(string s) {
        string ans;
        priority_queue<pair<int,char>> pq;
        unordered_map<char,int> mpp;
        int i=0;
        for(auto i : s){
            mpp[i]++;
        }

        for(auto j : mpp){
            pq.push({j.second,j.first});
        }

        while(!pq.empty()){
            int freq=pq.top().first;
            char s=pq.top().second;

            for(int j=0;j<freq;j++){
                ans.push_back(s);
            }
            pq.pop();
        }
        return ans;
    }
};