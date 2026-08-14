class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector <int> temp;
        for(int i=n-1;i>=n-k;i--)
        {
            temp.push_back(nums[i]);
            nums.pop_back();
        }
        reverse(temp.begin(), temp.end());
        nums.insert(nums.begin(),temp.begin(),temp.end());
    }
};