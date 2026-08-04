class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> d;
        for (int i = 0; i < nums.size(); i++) 
        {
            d[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) 
        {
            int y = target - nums[i];
            if (d.find(y) != d.end() && d[y] != i) 
            {
                return {d[y], i};
            }
        }
        return {};
    }
};