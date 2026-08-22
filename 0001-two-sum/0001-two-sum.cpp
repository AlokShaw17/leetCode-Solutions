class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        for (int j =0; j< nums.size();j++){ 
            num_map[nums[j]] = j;
        }
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end() && num_map[complement] != i) {
                return {num_map[complement], i};
            }
        }
        return {};
        
    }
};