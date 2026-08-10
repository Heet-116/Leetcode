class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string temp;
        int len = s.size() - 1;
        int j = len;

        while(j >= 0 && s[j] == ' '){   
            j--;
        }

        while(j >= 0) {
            if(s[j] != ' ') {
                temp.push_back(s[j]);
                j--;
            }
            else {
                reverse(temp.begin(), temp.end());

                for(int k = 0; k < temp.size(); k++) {
                    ans.push_back(temp[k]);
                }

                temp.clear();
                ans.push_back(' ');

                while(j >= 0 && s[j] == ' '){   
                    j--;
                }
            }
        }

        reverse(temp.begin(), temp.end());

        for(int k = 0; k < temp.size(); k++) {
            ans.push_back(temp[k]);
        }
        
        if(!ans.empty() && ans.back() == ' ')
            ans.pop_back();

        return ans;

    }
};