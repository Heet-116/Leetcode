class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        int i=0;
        int j=0;
        while(i<firstList.size() && j<secondList.size()){
            int start1=firstList[i][0];
            int start2=secondList[j][0];
            int end1=firstList[i][1];
            int end2=secondList[j][1];

            int start=0,end=0;
            start=max(start1,start2);
            end=min(end1,end2);

            if(start<=end){
                ans.push_back({start,end});
            }
            if(end1 < end2)
                i++;
            else
                j++;
        }
        return ans;
    }
};