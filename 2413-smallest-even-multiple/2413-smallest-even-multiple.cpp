class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n==1){
            return 2;
        }
        int ans = INT_MAX;
        for(int i = 1; i<=n; i++){
            int num = n*i;
            if(num%2==0 && num%n==0){
                ans = min(ans,num);
            }
        }
        return ans;
    }
};