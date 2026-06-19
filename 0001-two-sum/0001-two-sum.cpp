class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Maps the number value to its index in the array
        unordered_map<int, int> seen; 
        
        for(int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];
            
            // If the needed number is in our map, we found the pair
            if(seen.count(needed)) {
                return {seen[needed], i};
            }
            
            // Otherwise, store the current number and its index
            seen[nums[i]] = i;
        }
        
        return {};
    }
};
