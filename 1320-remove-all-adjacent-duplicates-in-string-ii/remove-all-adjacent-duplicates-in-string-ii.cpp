class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        string res;

        for(int i = 0; i < s.size(); i++) {
            char c = s[i];

            if(st.empty() || st.top().first != c) {
                st.push({c,1});
            }
            else {
                pair<char,int> p = st.top();
                st.pop();

                p.second++;

                if(p.second < k) {
                    st.push(p);
                }
            }
        }

        // Build answer
        while(!st.empty()) {
            char ch = st.top().first;
            int cnt = st.top().second;

            while(cnt--) {
                res.push_back(ch);
            }

            st.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};