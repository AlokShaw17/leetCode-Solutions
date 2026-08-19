class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v;
        for(auto a:nums){
            if(a!=val){
                v.push_back(a);
            }
        }
        nums.clear();
        nums.insert(nums.begin(),v.begin(),v.end());
        return nums.size();
    }
};