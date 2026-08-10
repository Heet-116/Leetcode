class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int j=1;j<strs.size();j++){
            for(int i=0;i<ans.size();i++){
                if(ans[i]!=strs[j][i]){
                    ans=ans.substr(0,i);
                    break;
                }
            }
        }
        return ans;
    }
};