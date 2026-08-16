class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int,int> mp;
        int b=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }
        for(auto a: mp){
            if (a.second== 1){
                b=a.first;
                break;
            }
        }
        return b;
    }
};