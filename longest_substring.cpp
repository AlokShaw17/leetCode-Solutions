class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int ans = 0;

        for (int i = 0; i < s.size(); i++) {

            int len = 0;

            for (int j = i; j < s.size(); j++) {

                int k;
                for (k = i; k < j; k++) {
                    if (s[k] == s[j])
                        break;
                }

                if (k != j)
                    break;

                len++;
            }

            if (len > ans)
                ans = len;
        }

        return ans;
    }
};