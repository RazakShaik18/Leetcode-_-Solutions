class Solution {
public:
    int commonFactors(int a, int b) {
        int ans = 0;//this method is brute-force method
        for(int i = 1 ; i<=min(a,b);i++){
            if(a%i==0 && b%i==0){
                ans++;
            }
        }
        return ans;
    }
};