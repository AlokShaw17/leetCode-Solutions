class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s;
        int i=1,ch=1;
        for(auto a:nums)
        {
            s.insert(a);
        }
        while(ch==1)
        {
            if(s.find(k*i)==s.end())
            {
                return k*i;
            }
            else
            {
                i++;
            }
        }
        return k;
    }
};