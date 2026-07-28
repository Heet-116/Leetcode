class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        int m=s.size();
        sort(s.begin(),s.end());
        int prod=(s[m-1] - '0')*(s[m-2] - '0');
        return prod;
    }
};