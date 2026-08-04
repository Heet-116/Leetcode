class Solution {
public:
    int element(int x, vector<int>& nums2) {
        stack<int> st;
        int n = nums2.size();

        vector<int> ans(n);   

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

        for (int j = 0; j < nums2.size(); j++) {
            if (nums2[j] == x) {
                return ans[j];
            }
        }

        return -1;
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;

        for (int i = 0; i < nums1.size(); i++) {
            int x = element(nums1[i], nums2);
            res.push_back(x);
        }

        return res;
    }
};