class Solution {
public:
    int maxArea(vector<int>& height) {
        long long mx = 0;
        for (int i = 0, j = height.size() - 1; i < j; )
        {
            long long area;
            if (height[i] >= height[j])
            {
                area =(long long)height[j] * (j - i);
            }
            else
            {
                area = (long long)height[i] * (j - i);
            }
            if (area > mx)
            {
                mx = area;
            }
            if (height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return mx;
    }
};