class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        map <char,int> mpp;
        map <char,int> mpp1;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            mpp1[t[i]]++;
        }
        return mpp==mpp1;
    }
};
