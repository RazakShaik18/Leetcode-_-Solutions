class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // this solution has O(N^2) and this is brute force for better use prefix and counting sort where it can O(N+K)
        vector<int>ans;
            for(int i = 0 ; i<nums.size();i++){
            int count = 0;
            for(int j = 0 ; j<nums.size(); j++){
                if(nums[j]!=nums[i]&& nums[j]<nums[i]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;

    }
};