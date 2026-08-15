class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> s;
        int i=0;
        for(int j=i+1;j<nums.size();j++)
        if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
        return i+1;
    }
};