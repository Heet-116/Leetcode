class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        stack<int> st;
        int n = nums2.size();

        vector<int> ans(n);
        unordered_map<int,int> mpp;   // Added

        // Added: value -> index mapping
        for(int i = 0; i < n; i++){
            mpp[nums2[i]] = i;
        }

        ans[n - 1] = -1;
        st.push(nums2[n - 1]);

        for (int i = n - 2; i >= 0; i--) {

            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            if (st.empty()) {
                ans[i] = -1;
            } else {
                ans[i] = st.top();
            }

            st.push(nums2[i]);
        }

        // Added: build the result
        for(int i = 0; i < nums1.size(); i++){
            res.push_back(ans[mpp[nums1[i]]]);
        }

        return res;
    }
};