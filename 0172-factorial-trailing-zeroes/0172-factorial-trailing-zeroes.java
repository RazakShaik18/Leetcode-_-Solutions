class Solution {
    public int trailingZeroes(int n) {

        int count = 0;

        // Trailing zero = factor of 10
        // 10 = 2 × 5
        // Factors of 2 are always more than factors of 5 in n!,
        // so counting factors of 5 gives the number of trailing zeros.

        while (n > 0) {

            // Divide by 5 to count numbers containing factor 5.
            // Example (n = 100):
            // 100/5   = 20
            // 20/5    = 4  (same as 100/25)
            // 4/5     = 0  (same as 100/125)
            // Total = 20 + 4 = 24

            n = n / 5;

            // Add the count of factors of 5.
            count += n;
        }

        return count;
    }
}