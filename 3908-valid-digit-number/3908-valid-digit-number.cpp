class Solution {
public:
    bool validDigit(int n, int x) {
        vector<int>ans;
        while(n>0){
            int digit = n%10;
            ans.push_back(digit);
            n/=10;
        }
        reverse(ans.begin(),ans.end());
        if (find(ans.begin(), ans.end(), x) == ans.end()) {
        return false;
        }
        else if(ans[0]!=x){
            return true;
        }
        return false;
    }
};