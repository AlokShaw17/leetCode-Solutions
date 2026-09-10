class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for (int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]) || isdigit(s[i])){
                char ch = tolower(s[i]);
                str.push_back(ch);
            }
            else {
                continue;
            }
        }
        int i=0,j=str.length()-1;
        while(i<j){
            if(str[i]==str[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};