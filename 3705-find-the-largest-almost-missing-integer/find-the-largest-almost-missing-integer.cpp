class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        map<int, int> count;

        for (int i = 0; i <= nums.size() - k; i++) {

            set<int> st;

            for (int j = i; j < i + k; j++) {
                st.insert(nums[j]);
            }
            
            for (int x : st) {
                count[x]++;
            }
        }

        int ans = -1;

        for (auto p : count) {
            if (p.second == 1) {
                ans = max(ans, p.first);
            }
        }

        return ans;
    }
};