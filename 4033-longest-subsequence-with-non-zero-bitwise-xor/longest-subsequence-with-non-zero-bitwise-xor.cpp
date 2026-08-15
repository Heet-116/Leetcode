class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        bool NonZero = false;

        for(auto i : nums) {
            ans ^= i;

            if(i != 0) {
                NonZero = true;
            }
        }

        if(ans != 0) {
            return n;
        }
        
        if(NonZero) {
            return n - 1;
        }

        return 0;
    }
};