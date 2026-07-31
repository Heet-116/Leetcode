class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mpp1;
        int ans=0;

        vector<int> freq;

        for(int i=0;i<word.size();i++){
            mpp1[word[i]]++;
        }

        for(auto it : mpp1){
            freq.push_back(it.second);
        }

        sort(freq.begin(), freq.end(), greater<int>());

        int x=freq.size();

        for(int i=0;i<freq.size();i++){
            ans += freq[i] * ((i / 8) + 1);
        }
        
        return ans;
    }
};