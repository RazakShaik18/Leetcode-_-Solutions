class Solution {
public:
    int subtractProductAndSum(int n) {
        int for_add = n;
        int product  = 1;
        int sum = 0;
        while(n>0){
            int digit = n%10;
            product *= digit;
            n/=10;
        }
        while(for_add>0){
            int digit = for_add%10;
            sum += digit;
            for_add /=10;
        }
        return product - sum;
    }
};