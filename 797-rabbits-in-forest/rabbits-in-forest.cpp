class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int,int> mpp;
        int ans=0;

        for(auto i : answers){
            if(i>0)
                mpp[i]++;
        }

        for(int i=0;i<answers.size();i++){
            if(answers[i]==0){
                ans++;
                continue;
            }

            if(mpp[answers[i]]==0){
                continue;
            }
            else if(mpp[answers[i]]==1){
                ans=ans+answers[i]+1;
                mpp[answers[i]]=0;
            }
            else if(mpp[answers[i]]>1){

                if(answers[i]==1){
                    if(mpp[answers[i]]%2==0){
                        ans=ans+mpp[1];
                        mpp[answers[i]]=0;
                    }
                    else{
                        ans=ans+mpp[1]+1;
                        mpp[answers[i]]=0;
                    }
                }
                else{
                    if(mpp[answers[i]] <= answers[i]+1){
                        ans=ans+answers[i]+1;
                        mpp[answers[i]]=0;
                    }
                    else{
                        ans=ans+answers[i]+1;
                        mpp[answers[i]]=mpp[answers[i]]-(answers[i]+1);
                    }
                }
            }
        }

        return ans;
    }
};