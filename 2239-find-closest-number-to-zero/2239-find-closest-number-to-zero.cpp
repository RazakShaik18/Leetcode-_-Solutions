class Solution {
public:
    int findClosestNumber(vector<int>& nums) {

        int ans1 = INT_MIN;  // closest negative
        int ans2 = INT_MAX;  // closest positive

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] < 0) {
                ans1 = max(ans1, nums[i]);
            }
            else {
                ans2 = min(ans2, nums[i]);
            }
        }

        // only negative numbers
        if(ans2 == INT_MAX) {
            return ans1;
        }

        // only positive numbers
        if(ans1 == INT_MIN) {
            return ans2;
        }

        // compare distances
        if(abs(ans1) < ans2) {
            return ans1;
        }
        else {
            return ans2;
        }
    }
};