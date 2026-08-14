class Solution {
public:
    int maximumLengthSubstring(string s) {
        int max=0;
        for(int i=0;i<s.length();i++)
        {
            string str="";
            map<char,int> mpp;
            for (int j=i;j<s.length();j++)
            {
                mpp[s[j]]++;
                if (mpp[s[j]] > 2)
                    break;
                str += s[j];
            }
            if (str.length() > max){
                max=str.length();
            }
        }
        return max;
    }
};