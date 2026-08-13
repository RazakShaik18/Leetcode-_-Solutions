class Solution {
public:
    bool isPalindrome(string s) {
        string ans;

        for(char ch : s) {
            if(isalnum(ch)) {
                ans += tolower(ch);
            }
        }

        int left = 0;
        int right = ans.size() - 1;

        while(left < right) {
            if(ans[left] != ans[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};