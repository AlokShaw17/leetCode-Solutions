class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int c=0;
        int sum=0;
        vector<int> v;
        nums1.insert(nums1.begin(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int a = nums1.size();
        if (a%2==1)
        {
            return nums1[a/2];
        }
        else 
            return (nums1[a / 2 - 1] + nums1[a / 2]) / 2.0;
    }
};