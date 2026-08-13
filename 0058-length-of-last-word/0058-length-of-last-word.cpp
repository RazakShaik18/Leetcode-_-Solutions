class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int last = n-1;
         while(s[last] == ' ') {
        last--;
        }
        int  count = 0;
        for(int i = last; i >= 0 && s[i] != ' '; i--) {
            count++;
        }
        return count;
    }
};