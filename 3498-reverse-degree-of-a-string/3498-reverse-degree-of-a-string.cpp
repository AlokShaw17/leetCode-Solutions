class Solution {
public:
    int reverseDegree(string s) {
        int sum=0,i=1;
        for (auto ch : s){
            int b = 26-(ch - 'a');
            sum = sum + b * i;
            i++; 
        }
        return sum;
    }
};