class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                long long prod= (long long)nums[i]*nums[j];
                long long g=gcd(nums[i],nums[j]);
                long long ans1=prod/(g*g);
                ans=max(ans,ans1);
            }
        }
        return ans;
    }
};