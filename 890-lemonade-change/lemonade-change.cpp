class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        bool ans=true;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                five++;
                continue;
            }
            else if(bills[i]==10){
                if(five==0){
                    ans=false;
                    return false;
                }
                else{
                    five--;
                    ten++;
                    continue;
                }
            }
            else{
                if(five>=1 && ten>=1){
                    five-=1;
                    ten-=1;
                    continue;
                }
                else if(five>=3){
                    five-=3;
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};