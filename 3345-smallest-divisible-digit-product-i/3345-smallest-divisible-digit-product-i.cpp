class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans = 0;
        for(int i = 1;i<=n;i++){
        int product = 1;
        int temp = n;
        while(temp>0){
            int digit = temp%10;
            product *= digit;
            temp/=10;
        }
        if(product % t == 0){
            ans = n;
        }
        else{
            n++;
        }
        }
        return ans;
    }
};