class Solution {
public:
    int smallestNumber(int n, int t) {
        int a=0;
        for(int i=n;;i++)
        {
            int s=1;
            int c=i;
            while(c!=0)
            {
                a=c%10;
                s=s*a;
                c=c/10;
            }
            if (s%t==0)
            {
                return i;
                break;
            }
            else{
                continue;
            }
        }
        return 0;
    }
};
