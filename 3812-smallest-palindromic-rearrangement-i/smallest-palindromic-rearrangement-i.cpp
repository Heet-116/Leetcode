class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size()==1){
            return s;
        }
        int n=s.size();
        int mid=n/2;
        if(n%2==0){
        sort(s.begin(),s.begin()+mid);
        sort(s.begin() + mid, s.end(), greater<char>());
        }
        else{
            sort(s.begin(),s.begin()+mid);
            sort(s.begin() + mid+1, s.end(), greater<char>());
        }
        return s;
    }
};