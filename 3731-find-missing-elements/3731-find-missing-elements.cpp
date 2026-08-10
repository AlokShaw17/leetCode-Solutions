class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(),nums.end());
        for(int i=nums[0];i<=nums.back();i++){
            int c=0;
            for(int j=0;j<nums.size();j++){
                if (i==nums[j]){
                    c=1;
                }
            }
            if(c==0){
                v.push_back(i);
            }
        }
        return v;
    }
};