class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> c;
        for(auto a:s){
            c[a]++;
        }
        for(int i=0;i<s.length();i++){
            if(c[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};