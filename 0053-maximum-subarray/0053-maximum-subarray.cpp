class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        // currentsum = sum of the current subarray
        int currentsum = 0;

        // Start with nums[0] instead of 0
        // because the answer can be negative
        // Example: [-5, -2, -8] -> answer is -2
        int maxsum = nums[0];

        for(int i = 0; i < n; i++) {

            // Add current element to the current subarray
            currentsum += nums[i];

            // If current sum is greater than our previous
            // maximum, update maxsum
            maxsum = max(maxsum, currentsum);

            // If current sum becomes negative,
            // discard this subarray and start fresh
            // because a negative sum will only hurt
            // the next elements
            if(currentsum < 0) {
                currentsum = 0;
            }
        }

        return maxsum;
    }
};

/*
    METHOD:
    Kadane's Algorithm

    IDEA:
    Keep adding elements to currentsum.
    If currentsum becomes negative, reset it to 0
    and start a new subarray.

    Why?
    A negative sum cannot help us get a bigger
    subarray sum in the future.

    Example:
    [-2, 1]

    -2 -> currentsum = -2 -> reset to 0
     1 -> currentsum = 1

    So we start fresh from 1.

    TIME COMPLEXITY:
    O(n)

    We visit every element only once.

    SPACE COMPLEXITY:
    O(1)

    We only use currentsum, maxsum and n.
    No extra array is created.
*/