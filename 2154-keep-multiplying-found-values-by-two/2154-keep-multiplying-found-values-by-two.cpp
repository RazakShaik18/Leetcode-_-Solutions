class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();
        int x = original;
        while(find(nums.begin(), nums.end(), x) != nums.end()){
            x*=2;
        }
        return x;
    }
};