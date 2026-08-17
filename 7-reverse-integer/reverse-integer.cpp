class Solution {
public:
    int reverse(int x) {
        int num=x;
        long long reversedSum=0;
        while(num!=0){
            int remainder=num%10;
            reversedSum=reversedSum*10+remainder;
            num=num/10;
        }
        if(reversedSum>2147483648 || reversedSum<-2147483648){
            return 0;
        }
        return reversedSum;

    }
};