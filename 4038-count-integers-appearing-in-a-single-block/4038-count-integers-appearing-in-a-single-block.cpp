class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>b;
        for(int i = 0; i<n;i++){
            if(i ==0 || nums[i] != nums[i-1]){
                b[nums[i]]++;
            }
        }
        int cnt = 0;
        for(auto x : b){
            if(x.second == 1){
                cnt++;
            }
        }
        return cnt;
    }
};