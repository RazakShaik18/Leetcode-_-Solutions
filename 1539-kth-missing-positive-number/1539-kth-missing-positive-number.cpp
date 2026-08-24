class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num = 1;

        while (k > 0) {

            if (find(arr.begin(), arr.end(), num) == arr.end()) {
                k--;

                if (k == 0)
                    return num;
            }

            num++;
        }

        return -1;
    }
};