class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int count=0;
        if(s==""){
            return depth;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
                depth=max(count,depth);
            }
            else if(s[i]==')'){
                count--;
            }
    }
    return depth;
    }
};