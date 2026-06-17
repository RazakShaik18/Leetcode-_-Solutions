class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        set<int> s;
        int single = 0;
        int d = 0;
        for(int i = 0 ; i< nums.size(); i++){
            
            if(nums[i]<=9){
                single += nums[i];
            }
            else{
                d += nums[i];
            }
        }
        if(single > d || d > single){
            return true;
        }
        else{
            return false;
        }
    }
};