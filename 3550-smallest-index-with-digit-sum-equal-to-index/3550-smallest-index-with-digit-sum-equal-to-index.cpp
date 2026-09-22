class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;

        for(int i = 0; i < n; i++) {
            int x = nums[i];
            int sum = 0;

            while(x > 0) {
                sum += x % 10;
                x /= 10;
            }

            if(sum == i) {
                ans = min(ans, i);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};