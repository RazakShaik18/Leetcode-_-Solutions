class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;

        // nums has 2n elements
        // First half  : nums[0 ... n-1]
        // Second half : nums[n ... 2n-1]

        // One iteration = One (x, y) pair
        // Total pairs = n
        // So loop runs only n times (nums.size() - n == n)

        for (int i = 0; i < nums.size() - n; i++) {

            // Take element from first half
            ans.push_back(nums[i]);

            // Matching element is always n positions ahead
            // j = i + n
            ans.push_back(nums[i + n]);
        }

        return ans;
    }
};