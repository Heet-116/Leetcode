class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int x=n;

        if(n == 0)
        return true;

        if(flowerbed.size()==1){
            if(flowerbed[0]==0 && n==1)
            return true;
            else if(flowerbed[0]==1 && n==0){
                return true;
            }
            else
            return false;
        }

        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                if(i==0){
                    if(flowerbed[i+1]==0){
                        x--;
                        flowerbed[i]=1;
                    }
                }
                else if(i==flowerbed.size()-1){
                    if(flowerbed[i-1]==0){
                        x--;
                        flowerbed[i]=1;
                    }
                }
                else{
                    if(flowerbed[i+1]==0 && flowerbed[i-1]==0){
                        x--;
                        flowerbed[i]=1;
                    }
                }
            }
            if(x==0){
                return true;
            }
        }  
        return false;      
    }
};