class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int mn = *min_element(nums1.begin(), nums1.end());

        // Minimum element cannot be changed,
        // so its parity decides the target.
        if (mn % 2 == 0) {
            
            // Target = EVEN
            for (int x : nums1) {
                if (x % 2 != 0) {
                    // Odd number needs a smaller odd number.
                    bool found = false;

                    for (int y : nums1) {
                        if (y < x && y % 2 != 0) {
                            found = true;
                            break;
                        }
                    }

                    if (!found)
                        return false;
                }
            }
        }
        else {
            
            // Target = ODD
            for (int x : nums1) {
                if (x % 2 == 0) {
                    // Even number can subtract the minimum odd.
                    if (x - mn < 1)
                        return false;
                }
            }
        }

        return true;
    }
};