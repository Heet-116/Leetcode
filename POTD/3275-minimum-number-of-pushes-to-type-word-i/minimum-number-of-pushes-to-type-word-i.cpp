class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;

        if(word.size() <= 8){
            return word.size();
        }
        else if(word.size() > 8 && word.size() <= 16){
            if(word.size() == 16){
                ans = 8 + 8 * 2;
            }
            else{
                int temp = (word.size() - 8) * 2;
                ans = 8 + temp;
            }
        }
        else if(word.size() > 16 && word.size() <= 24){
            if(word.size() == 24){
                ans = 8 + 16 + 8 * 3;
            }
            else{
                int temp = (word.size() - 16) * 3;
                ans = 8 + 16 + temp;
            }
        }
        else{
            int temp = (word.size() - 24) * 4;
            ans = 8 + 16 + 24 + temp;
        }

        return ans;
    }
};