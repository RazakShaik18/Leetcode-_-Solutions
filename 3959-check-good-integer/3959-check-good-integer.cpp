class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitsum = 0;
        int squaresum = 0;
        int num = n;
        
        //first digitsum of the number(n)
        while(n>0){
            digitsum += n%10;
            n/=10;
        }

        //squaresum of the digits in number(n)
        while(num>0){
            int digit = num%10;
            squaresum += digit*digit;
            num/=10;
        }
        if((squaresum - digitsum)>=50){
            return true;
        }
        return false;
    }
};