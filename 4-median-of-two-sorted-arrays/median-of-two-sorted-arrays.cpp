class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;    
        vector<int> ans;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else if(nums2[j]<nums1[i]){
                ans.push_back(nums2[j]);
                j++;
            }
            else{
                ans.push_back(nums1[i]);
                ans.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        if(i<nums1.size()){
            while(i<nums1.size()){
                ans.push_back(nums1[i]);
                i++;
            }
        }

        if(j<nums2.size()){
            while(j<nums2.size()){
                ans.push_back(nums2[j]);
                j++;
            }
        }
        int mid = ans.size()/2;
        if(ans.size()%2==0){
            double med=0;
            med=(ans[mid]+ans[mid-1])/2.0;
            return med;
        }
        else{
            return ans[mid];
        }
        return 0;
    }
};