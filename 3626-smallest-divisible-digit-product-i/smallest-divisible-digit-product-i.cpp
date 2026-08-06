class Solution {
public:
    int smallestNumber(int n, int t) {
        int current=n;
        bool exit=false;
        while(true){
            int x=current;
            int prod=1;
            while(x!=0){
                int digit=x%10;
                prod=prod*digit;
                x=x/10;
            }
            if(prod%t==0){
                exit=true;
                break;
            }
            else{
                current++;
            }
            if (exit)
            break;
        }
        return current;
    }
};