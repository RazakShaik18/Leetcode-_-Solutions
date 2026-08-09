class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>left_sum(n);
        vector<int>right_sum(n);
        vector<int>ans;
         left_sum[0] = 0;
         right_sum[n-1] = 0;
        for(int i = 1 ; i<n; i++){
            left_sum[i] = left_sum[i-1]+nums[i-1];
        }
        for(int i = n-2;i>=0;i--){
            right_sum[i] = right_sum[i+1]+nums[i+1];
        }
        for(int i = 0 ; i<left_sum.size();i++){
            int diff = abs(left_sum[i]-right_sum[i]);
            ans.push_back(diff);
        }
        return ans;

        
    }
};