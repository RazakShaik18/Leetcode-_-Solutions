class Solution {
public:
    int smallestNumber(int n, int t) {

        /*
        My Mistake:
        - I thought using a for loop with i would help me check the next numbers one by one.
        - But I forgot that the number we are checking is n, not i.
        - Increasing i does not move to the next candidate number; only n++ does that.
        - The loop should not depend on a counter because we stop when we find the first valid number.
        - Since we don't know how many numbers need to be checked, while loop is the better choice.

        Time Complexity:
        - The loop can run n times in the worst case.
        - For every number, we calculate the product of digits (d digits).
        - TC: O(n * d)

        Space Complexity:
        - Only constant variables are used.
        - SC: O(1)
        

        int ans = 0;

        for(int i = 1; i <= n; i++) {

            int product = 1;
            int temp = n;

            while(temp > 0) {
                int digit = temp % 10;
                product *= digit;
                temp /= 10;
            }

            if(product % t == 0) {
                ans = n;
            }
            else {
                n++;
            }
        }

        return ans;
        */


        /*
        Approach:
        - Start from n because the answer can be n itself.
        - Check every number in increasing order until we find a number whose
          digit product is divisible by t.
        - We don't know how many numbers we need to check, so we continue until
          the required condition is satisfied.
        - The first valid number found is guaranteed to be the smallest.

        Time Complexity: O(k * d)
        k = numbers checked until answer is found
        d = number of digits

        Space Complexity: O(1)
        */

            // Run until we find the answer. return n will stop the loop.
            while(true) { 
            int product = 1;
            int temp = n;

            while(temp > 0) {
                int digit = temp % 10;
                product *= digit;
                temp /= 10;
            }

            if(product % t == 0) {
                return n; // Stops the while(true) loop
            }

            n++; // Check the next number
        }
    }
};