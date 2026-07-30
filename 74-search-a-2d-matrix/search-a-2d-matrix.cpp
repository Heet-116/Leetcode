class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0, high = matrix.size() - 1;
        int row = matrix.size();

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (matrix[mid][0] == target)
            return true;

            if (matrix[mid][0] > target) {
                row = mid;          
                high = mid - 1;     
            } else {
                low = mid + 1;
            }
        }

        if(row==0){
            return false;
        }

        int start=0;
        int end=matrix[0].size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(target==matrix[row-1][mid]){
                return true;
            }
            else if(target>matrix[row-1][mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};