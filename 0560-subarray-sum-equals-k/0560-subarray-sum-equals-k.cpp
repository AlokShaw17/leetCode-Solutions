class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int psum=0,count =0;
        mp[0]=1;
        for(auto a: nums){
            psum+=a;
            if (mp.find(psum - k) != mp.end()) {
                count += mp[psum - k];
            }
            mp[psum]++;
        }
        return count;
    }
};