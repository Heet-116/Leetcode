class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<int,string> mpp={
            {2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},
            {9,"wxyz"}};

        vector<string> ans={""};
        for(int i=0;i<digits.size();i++){
            string letter = mpp[digits[i]-'0'];
            vector<string> temp;

            for(auto str:ans){
                for(auto ch:letter){
                    temp.push_back(str+ch);
                }
            }
            ans=temp;
        }
        return ans;
    }
};