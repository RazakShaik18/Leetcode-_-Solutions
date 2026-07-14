class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int ans = num;
        while(num>0){
            int val = num %10;
            if(ans%val==0){
                cnt++;
            }
            num/=10;
        }
        return cnt;
    }
};