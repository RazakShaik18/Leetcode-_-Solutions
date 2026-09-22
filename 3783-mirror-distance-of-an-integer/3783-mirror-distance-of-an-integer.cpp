class Solution {
public:
    int mirrorDistance(int n) {
        int  ans = 0;
        int num = n;
        int reverse = 0;
        //reverse the number(n)
        while(n>0){
            int digit = n%10;
            reverse = (reverse *10)+digit;
            n/=10;
        }
        return ans = abs(num - reverse);
    }
};