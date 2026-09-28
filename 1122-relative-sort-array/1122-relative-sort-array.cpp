class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();

        vector<int> ans;
        vector<bool> used(n, false);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!used[j] && arr2[i] == arr1[j]) {
                    ans.push_back(arr1[j]);
                    used[j] = true;
                }
            }
        }

        vector<int> rem;

        for (int i = 0; i < n; i++) {
            if (!used[i]) {
                rem.push_back(arr1[i]);
            }
        }

        sort(rem.begin(), rem.end());

        for (int x : rem) {
            ans.push_back(x);
        }

        return ans;
    }
};