class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        // this make extra space 
        /*vector<int>ans = nums;
        for(int i = nums.size()-1; i>=0 ;i--){
            ans.push_back(nums[i]);
        }
        return ans;*/
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            nums.push_back(nums[i]);
        }
        return nums;
        
    }
};