class Solution {
public:
    int romanToInt(string s) {
        int n=s.size()-1;
        int ans=0;
        for(int i=n;i>=0;i--){
            if(s[i]=='I'){
                ans+=1;
            }

            else if(s[i]=='V'){
                if(i>0 && s[i-1]=='I'){
                    ans=ans+4;
                    i--;
                }
                else{
                    ans=ans+5;
                }
            }

            else if(s[i]=='X'){
                if(i>0 && s[i-1]=='I'){
                    ans=ans+9;
                    i--;
                }
                else{
                    ans=ans+10;
                }
            }

            else if(s[i]=='L'){
                if(i>0 && s[i-1]=='X'){
                    ans=ans+40;
                    i--;
                }
                else{
                    ans=ans+50;
                }
            }

            else if(s[i]=='C'){
                if(i>0 && s[i-1]=='X'){
                    ans=ans+90;
                    i--;
                }
                else{
                    ans=ans+100;
                }
            }

            else if(s[i]=='D'){
                if(i>0 && s[i-1]=='C'){
                    ans=ans+400;
                    i--;
                }
                else{
                    ans=ans+500;
                }
            }

            else if(s[i]=='M'){
                if(i>0 && s[i-1]=='C'){
                    ans=ans+900;
                    i--;
                }
                else{
                    ans=ans+1000;
                }
            }
        }
        return ans;
    }
};