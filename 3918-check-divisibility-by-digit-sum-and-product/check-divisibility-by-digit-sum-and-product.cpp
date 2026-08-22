class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int digits=0;
        int prod=1;
        int y=n;
        while(y>0){
            int x=y%10;
            digits+=x;
            prod=prod*x;
            y=y/10;
        }
        sum=digits+prod;
        cout<<sum;
        if(n%sum==0){
            return true;
        }
        return false;
    }
};