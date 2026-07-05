class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maximum_digit_range = 0;
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            int largest = INT_MIN;
            int smallest = INT_MAX;
            int x = nums[i];

            int digit_range = 0;

            while(x > 0) {
                int digit = x % 10;
                largest = max(largest, digit);
                smallest = min(smallest, digit);
                x /= 10;
            }

            digit_range = largest - smallest;

            if(digit_range > maximum_digit_range) {
                maximum_digit_range = digit_range;
                ans = nums[i];   // reset answer
            }
            else if(digit_range == maximum_digit_range) {
                ans += nums[i];   // fix spacing + correct sum logic
            }
        }

        return ans;
    }
};