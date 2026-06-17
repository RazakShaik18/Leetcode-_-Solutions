class Solution {
public:
    int countEven(int num) {
        int cnt = 0;
        for(int i = 1 ; i <= num; i++ ){
            int temp = i;
        int count = 0;
            while(temp!=0){
                temp%10;
                count += temp;
                temp/=10;
            }
            if(count%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};
