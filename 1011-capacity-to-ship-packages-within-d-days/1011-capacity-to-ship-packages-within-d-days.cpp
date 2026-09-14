class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int d = 1;
            int sum = 0;

            for (int x : weights) {
                if (sum + x <= mid) {
                    sum += x;
                } else {
                    d++;
                    sum = x;
                }
            }

            if (d <= days)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};