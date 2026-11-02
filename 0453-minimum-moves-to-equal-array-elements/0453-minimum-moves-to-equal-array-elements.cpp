class Solution {
public:
    int minMoves(vector<int>& nums) {
    int m = *min_element(nums.begin(), nums.end());
    long long mov = 0;
    for (int x : nums) 
    {            
        mov = mov + x - m;
    }
    return (int)mov;
    }
};