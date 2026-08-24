class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int in = prices[0],s=0;
        for (int i = 1; i < prices.size(); i++) {
            if(prices[i] < in)
            {
                in=prices[i];
            }
            else if(prices[i]-in > s)
            {
                s=prices[i]-in;
            } 
        }
        return s;
    }
};