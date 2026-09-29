class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int mid = n / 2;

        unordered_map<int, int> mp;

        for(int x : nums) {
            mp[x]++;
        }

        return mp[nums[mid]] == 1;
    }
};