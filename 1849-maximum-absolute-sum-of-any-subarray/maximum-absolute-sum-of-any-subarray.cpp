class Solution {
public:
    int maxSum(vector<int>& nums){
        int best=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=best+nums[i];
            int v2=nums[i];
            best=max(v1,v2);
            ans=max(ans,best);
        }
        return ans;
    }
    int minSum(vector<int>& nums){
        int best=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=best+nums[i];
            int v2=nums[i];
            best=min(v1,v2);
            ans=min(ans,best);
        }
        return ans;
    }
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi=abs(maxSum(nums));
        int min=abs(minSum(nums));
        return max(min,maxi);
    }
};