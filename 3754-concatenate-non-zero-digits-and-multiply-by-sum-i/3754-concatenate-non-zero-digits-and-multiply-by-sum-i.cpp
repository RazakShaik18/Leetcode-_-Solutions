class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        int store = 0;
        for(char ch : s){
            if(ch != '0'){
                int ans = ch -'0';
                store = (store*10) + ans;
            }
           
        }
        long long x = store;
        int sum = 0;
        while(store>0){
            int s = store % 10;
            sum += s;
            store/=10;
        }
        long long  answer = x*sum;
        return answer;
    }
};