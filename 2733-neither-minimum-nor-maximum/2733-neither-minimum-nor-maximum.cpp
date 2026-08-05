class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        int minimum = *min_element(nums.begin(),nums.end());
        int maximum = *max_element(nums.begin(),nums.end());
        if(n<=2){
            return -1;
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]!=minimum && nums[i]!=maximum){
                ans = nums[i];
            }
        }
        return ans;

    }
};