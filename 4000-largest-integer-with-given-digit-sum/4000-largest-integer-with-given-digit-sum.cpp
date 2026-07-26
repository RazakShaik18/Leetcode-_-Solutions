class Solution {
public:
    int largestInteger(int n, int s) {
        
         // If digit sum is impossible
        if (s > 9 * n)
            return -1;

        // Only number whose digit sum is 0
        if (s == 0)
            return 0;

        int ans = 0;

        // Fill each digit from left to right
        for (int i = 0; i < n; i++) {

            int digit;

            if (s >= 9) {
                digit = 9;
                s -= 9;
            } else {
                digit = s;
                s = 0;
            }

            ans = ans * 10 + digit;
        }
        return ans;
    }
};