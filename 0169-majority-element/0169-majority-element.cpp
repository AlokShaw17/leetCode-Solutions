class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int c=0,max=0;
        for(auto a:nums){
            mp[a]++;
        }
        for(auto b : mp)
        {
            if(b.second > max)
            {
                max=b.second;
                c=b.first;
            }
        }
        return c;
    }
};