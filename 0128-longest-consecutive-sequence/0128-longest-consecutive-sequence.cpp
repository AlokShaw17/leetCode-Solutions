class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        int sum=0,m=0;
        for(auto a : nums)
        {
            s.insert(a);
        }
        for(auto b:s)
        {
            if(s.find(b-1)==s.end())
            {
                int a=b;
                sum=0;
                while(s.find(a)!=s.end())
                {
                    a++;
                    sum++;
                }
                m=max(sum,m);
            }

        }
        return m;
    }
};