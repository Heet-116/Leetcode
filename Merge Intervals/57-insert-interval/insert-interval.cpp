class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& ans) {
        vector<vector<int>> ans1;
        sort(ans.begin(),ans.end());
        int start1=ans[0][0];
        int end1=ans[0][1];
        for(int i=1;i<ans.size();i++){
            int start2=ans[i][0];
            int end2=ans[i][1];
            if(end1>=start2){
                start1=start1;
                end1=max(end1,end2);
                continue;
            }
            ans1.push_back({start1,end1});
            start1=start2;
            end1=end2;
        }
        ans1.push_back({start1,end1});
        return ans1;
    }

    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        bool newInserted = false;
        for(int i=0;i<intervals.size();i++){
            if(newInterval[0]>=intervals[i][0]){
                ans.push_back(intervals[i]);
                continue;
            }
            else if(newInterval[0]<intervals[i][0] && newInserted==false){
                ans.push_back(newInterval);
                newInserted=true;
            }
            ans.push_back(intervals[i]);
        }
        if(!newInserted)
            ans.push_back(newInterval);
        return merge(ans);
    }
};