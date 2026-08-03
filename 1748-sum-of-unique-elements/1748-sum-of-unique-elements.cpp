class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int>freq(101 ,0);
        for(int num : nums){
            freq[num]++;
        }
        for(int i = 1; i<=100;i++){
            if(freq[i] == 1){
                sum += i;
            }
        }
        return sum;
    }
};