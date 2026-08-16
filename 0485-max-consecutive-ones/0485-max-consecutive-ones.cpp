class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int c=0;
        for(auto a:nums){
            if (a==1){
                c++;
            }
            else{
                if(c>max){
                    max=c;
                }
                c=0;
            }
        }
        if(c>max){
            return c;
        }
        else
            return max;
    }
};