class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        for(auto ch : s){
            if (ch >= 'A' && ch <= 'Z') {
            ch+=32;
            }
            ans+=ch;
        }
        return ans;
    }
};