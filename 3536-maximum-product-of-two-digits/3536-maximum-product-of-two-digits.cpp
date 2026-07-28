class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        int max1 = 0;
        int max2 = 0;
        while(n>0){
            int digit = n%10;
            ans.push_back(digit);
            n/=10;
        }
        sort(ans.begin(),ans.end());
        max1 = ans[ans.size()-1];
        max2 = ans[ans.size()-2];
        return max1*max2;
    }
};