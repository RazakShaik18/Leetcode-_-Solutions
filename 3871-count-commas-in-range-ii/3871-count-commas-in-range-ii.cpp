class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

        // Numbers from 1000 to 999999 have 1 comma
        if (n >= 1000)
            ans += 1LL * (min(n, 999999LL) - 1000 + 1) * 1;

        // Numbers from 1000000 to 999999999 have 2 commas
        if (n >= 1000000)
            ans += 1LL * (min(n, 999999999LL) - 1000000 + 1) * 2;

        // Numbers from 1000000000 to 999999999999 have 3 commas
        if (n >= 1000000000)
            ans += 1LL * (min(n, 999999999999LL) - 1000000000 + 1) * 3;

        // Numbers from 1000000000000 to 999999999999999 have 4 commas
        if (n >= 1000000000000LL)
            ans += 1LL * (min(n, 999999999999999LL) - 1000000000000LL + 1) * 4;

        // Numbers from 1000000000000000 onward have 5 commas
        if (n >= 1000000000000000LL)
            ans += 1LL * (n - 1000000000000000LL + 1) * 5;

        return ans;
    }
};