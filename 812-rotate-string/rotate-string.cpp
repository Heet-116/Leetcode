class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
            return false;

        int len = s.size();
        char f = goal[0];

        for(int start = 0; start < s.size(); start++) {

            if(s[start] == f) {

                int j = 0;
                int i = start;

                while(j < goal.size()) {
                    if(s[i] == goal[j]) {
                        i = (i + 1) % len;
                        j++;
                    }
                    else {
                        break;       
                    }
                }

                if(j == goal.size()) {
                    return true;
                }
            }
        }

        return false;
    }
};