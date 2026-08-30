class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int sum = 0;
        int ma = INT_MIN, p = 0;
        int mi = INT_MAX, n = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > ma)
            {
                ma = nums[i];
                p = i;
            }

            if (nums[i] < mi)
            {
                mi = nums[i];
                n = i;
            }
        }
        int left = min(p, n);
        int right = max(p, n);
        int removeLeft = right + 1;
        int removeRight = nums.size() - left;
        int removeBoth = (left + 1) + (nums.size() - right);
        sum = min({removeLeft, removeRight, removeBoth});
        return sum;
    }
};
