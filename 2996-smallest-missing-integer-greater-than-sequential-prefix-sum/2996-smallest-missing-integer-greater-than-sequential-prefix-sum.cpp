class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if (nums[i]==nums[i-1]+1){
                sum=sum+nums[i];
            }
            else{
                break;
            }
        }
        int ch=1;
        while (ch==1){
            int k=0;
            for (auto a : nums){
                if(a==sum){
                    k=1;
                    break;
                }
            }
            if(k==0){
                break;
            }
            sum++;
        }
        return sum;
    }
};