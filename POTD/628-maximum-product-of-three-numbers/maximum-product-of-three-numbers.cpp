class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int j=nums.size()-1;
        int i=3;
        int prod1=1;
        int prod2=1;
        while(i>0 && j>=0){
            prod1=prod1*nums[j];
            i--;
            j--;
        }
        prod2=nums[0]*nums[1]*nums[n];
        return max(prod1,prod2);
    }
};