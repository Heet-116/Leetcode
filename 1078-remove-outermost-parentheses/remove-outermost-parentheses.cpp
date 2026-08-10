class Solution {
public:
    string removeOuterParentheses(string s) {
        int len=s.size();
        string ans="";
        int open=0;
        int close=0;
        if(s==""){
            return ans;
        }
        for(int i=1;i<s.size();i++){
            if(s[i]=='(')
                open++;
            else
                close++;
            if(close>open){
                if(i!=len){
                    open++;
                    i=i+1;
                    continue;
                }
                else if(i==len-1)
                    ans.push_back(s[i]);
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};