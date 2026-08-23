class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum = nums[0], sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(sum+nums[i]>nums[i])
            {
                sum=sum+nums[i];
            }
            else
            {
                sum=nums[i];
            }

            maximum=max(sum, maximum);
        }
        return maximum;
    }
};