class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int len=num.size();
        int odd=INT_MAX;
        for(int i=len-1;i>=0;i--){
            if(num[i]%2!=0){
                odd=i;
                break;
            }
        }
        if(odd==INT_MAX){
            return ans;
        }
        else{
            ans=num.substr(0,odd+1);
        }
        return ans;
    }
};