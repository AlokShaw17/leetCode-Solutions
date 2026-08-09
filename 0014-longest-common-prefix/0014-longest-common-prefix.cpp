class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string b="", a="";
        string s="";
        a=strs[0];
        b=strs.back();
        for(int i=0;i<a.length();i++){
            if(a[i]==b[i]){
                s=s+a[i];
            }
            else{
                break;
            }
        }
        return s;
    }

};