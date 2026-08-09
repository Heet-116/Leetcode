class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end(),greater<int>());
        sort(discounts.begin(),discounts.end(),greater<int>());

        int len=min(prices.size(),discounts.size());
        double total=0.0;

        for(int i=0;i<len;i++){
            total+=prices[i]*(100.0-discounts[i])/100.0;
        }
        for(int i=len;i<prices.size();i++){
            total+=prices[i];
        }
        return total;
    }
};