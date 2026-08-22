class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n;
        int sum = 0;
        long long product = 1;
        int ans = 0;
        while(num>0){
            int digit = num%10;
            sum+=digit;
            product *= digit;
            num/=10;
        }
            ans  = sum+product;
        if(n%ans==0){
            return true;
        }
        return false;

    }
};