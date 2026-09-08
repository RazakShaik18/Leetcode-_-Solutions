
class Solution {
public:
    int countCommas(int n) {

        // 1 to 999 -> no commas
        if (n < 1000) // 998  -->
            return 0; 

        // Commas start from 1000.
        // Every number from 1000 to n has 1 comma.
        //
        // Count numbers from 1000 to n:
        // n - 1000 + 1

        return n - 1000 + 1;
    }
};
/*

**Memory trick:**
`1000` = first number with comma → **count from 1000 to n** → `n - 1000 + 1`.
*/