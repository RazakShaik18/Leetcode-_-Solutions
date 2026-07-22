class Solution {
public:
    int xorOperation(int n, int start) {
        //this logic create sc : O(1)
        /*int ans = 0;
        for(int i = 0 ; i<n; i++ ){
            int a = start +2*i;
            ans ^= a;
        }
        return ans;*/
        //------------------------------//
        // This logic will create sc : O(N)
        int ans = 0;
        vector<int>nums(n);
        for(int i = 0 ; i<n ; i++){
            nums[i] = start +2 *i;
            ans ^= nums[i];
        }
        return ans;
    }
};