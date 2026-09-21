class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int x : nums){
            freq[x]++;
        }

        for(int i = 0; i <= nums.size(); i++){
            if(freq[i] == 0)
                return i;
        }

        return -1; // optional safety return
    }
};