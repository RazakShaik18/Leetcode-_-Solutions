class Solution {
public:
    int reverseDegree(string s) {
        int rev = 0;

        for(int i = 0; i < s.length(); i++) {
            rev += (26 - (s[i] - 'a')) * (i + 1);
        }

        return rev;
    }
};