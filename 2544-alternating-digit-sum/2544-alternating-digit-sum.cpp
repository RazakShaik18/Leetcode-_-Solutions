class Solution {
public:
    int alternateDigitSum(int n) {
        int digits = 0;
        int cnt = 0;
        int num = n;
        int ans = 0;
        while(n>0){
             int digit = n%10;
             digits++;
             n/=10;
        }
        while(num>0){
            int digit = num%10;
            if(digits%2 == 0){
                if(cnt%2==0){
                    ans -= digit;
                }
                else{
                    ans+=digit;
                }

            }
            else{
                if(cnt%2==0){
                    ans+= digit;
                }
                else{
                    ans-=digit;
                }
            }
            cnt++;
            num/=10;
        }
        return ans;
    }
};