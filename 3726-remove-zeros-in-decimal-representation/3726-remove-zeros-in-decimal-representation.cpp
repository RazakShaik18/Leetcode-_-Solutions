class Solution {
public:
    long long removeZeros(long long n) {
        long long ans = 0;
        long long rem = 0;
        while(n>0){
            long long digit = n%10;
            if(digit != 0){

            ans = (ans*10)+digit;
            }
            n/=10;
        }
        while(ans>0){
            int digit = ans%10;
            rem = (rem*10)+digit;
            ans/=10;
        }
        return rem;
    }

};