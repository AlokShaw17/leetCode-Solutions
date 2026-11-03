class Solution {
public:
    int scoreOfParentheses(string s) {
        int a = 0, b = 0;

        for(int i = 0; i < s.size(); i++) 
        {
            if(s[i] == '(') 
            {
                b++;
            }
            else {
                b--;
                if(s[i-1] == '(')
                    a = a + pow(2, b);
            }
        }
        return a;
    }
};