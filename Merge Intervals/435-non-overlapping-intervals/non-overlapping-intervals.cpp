class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int prev=0;
        int overlap=0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[prev][1]>intervals[i][0]){
                if(intervals[prev][1]>intervals[i][1]){
                    prev=i;
                    overlap++;
                }
                else{
                    overlap++;
                }
            }
            else{
                prev=i;
            }
        }
        return overlap;
    }
};