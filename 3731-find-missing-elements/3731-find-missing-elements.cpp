class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;

        for (int i = nums[0]; i <= nums.back(); i++) {
            bool found = false;

            for (auto a : nums) {
                if (a == i) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};