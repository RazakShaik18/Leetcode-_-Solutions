class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        for(int i = 0 ; i<nums.size()-n;i++){
        int k = i;
        int j = i + n;
            ans.push_back(nums[k]);
            ans.push_back(nums[j]);
        }
        return ans;
        
    }
};