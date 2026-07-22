class Solution {
public:
    int countPrimes(int n) {

        // Prime numbers exist only from 2 onwards.
        if (n <= 2) return 0;

        // mark[i] = 0 -> Prime candidate
        // mark[i] = 1 -> Composite number
        vector<int> mark(n, 0);

        /*
            Sieve of Eratosthenes

            Idea:
            Every time we discover a prime, we eliminate all of its multiples.
            A multiple of a prime can never be prime.

            We start marking from i*i because smaller multiples
            (2*i, 3*i, ..., (i-1)*i) have already been eliminated
            while processing smaller prime numbers.
        */
        for (int i = 2; i * i < n; i++) {

            if (!mark[i]) {
                for (int j = i * i; j < n; j += i) {
                    mark[j] = 1;
                }
            }
        }

        // Count the numbers that survived the elimination process.
        int primes = 0;

        for (int i = 2; i < n; i++) {
            if (!mark[i])
                primes++;
        }

        return primes;
    }
}; 