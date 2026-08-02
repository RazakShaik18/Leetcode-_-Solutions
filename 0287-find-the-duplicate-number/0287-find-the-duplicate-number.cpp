class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // this method will pass only 54 / 59 test cases 
        //int ans = 0;
        /*for(int i = 0; i<nums.size();i++){
            for(int j = i+1; j<nums.size();j++){
                if(nums[i]==nums[j]){
                    ans = nums[i];
                }
            }
        }
        return ans;*/
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                ans = nums[i];
            }
        }
        return ans;
    }
};