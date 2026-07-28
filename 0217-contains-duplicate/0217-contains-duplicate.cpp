class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*unordered_set<int>seen;
        for(int i = 0 ; i<nums.size(); i++){
            if(seen.count(nums[i])){
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;*/
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};