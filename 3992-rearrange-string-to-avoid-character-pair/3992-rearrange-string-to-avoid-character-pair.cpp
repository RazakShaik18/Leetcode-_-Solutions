class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string group_1 = "";
        string group_2 = "";
        string group_3 = "";
        string ans;
        for(char ch : s){
            if(ch == x){
                group_1 += ch;
            }
            else if(ch == y){
                group_2 += ch;
            }
            else{
                group_3 += ch;
            }
        }
        ans = group_2+group_3+group_1;
        return ans;
    }
};