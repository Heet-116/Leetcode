class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int x=n/3;
        int ans=0,i=n-2;
        while(x>=1){
            ans+=piles[i];
            i-=2;
            x--;
        }
        return ans;
    }
};