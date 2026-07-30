class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        if(target> accumulate(nums.begin(),nums.end(),0)) return 0;
        int i=0;
        int j=0;
        int ans=INT_MAX;
        int sum=0;

        sum=nums[i];

        while(j<nums.size()){
            if(sum<target){
                j++;
                if(j<nums.size())
                    sum+=nums[j];
            }
            else if(sum>=target){
                ans=min(ans,j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        return ans;
    }
};