class Solution {
public:
    bool isgood(int j,vector<int>& nums,int k,unordered_map<int,int>& mpp1){
        bool res = true;
            if(mpp1[nums[j]] > k){
                res=false;
            }
        return res;
    }

    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans = INT_MIN;
        unordered_map<int,int> mpp;
        int i=0;
        int j=1;
        mpp[nums[i]]++;
        ans=1;
        while(j<nums.size()){
            mpp[nums[j]]++;
            if(isgood(j,nums,k,mpp)){
                ans=max(ans,j-i+1);
                j++;
                continue;
            }
            else{
                while(mpp[nums[j]] > k) {
                    mpp[nums[i]]--;
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};