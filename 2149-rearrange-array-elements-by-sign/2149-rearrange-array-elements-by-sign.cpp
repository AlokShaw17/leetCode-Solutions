class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int o=0,e=1;
        vector<int> n(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0){
                n[o]=nums[i];
                o+=2;
            }
            else
            {
                n[e]=nums[i];
                e+=2;
            }
        }
        return n;
    }
};