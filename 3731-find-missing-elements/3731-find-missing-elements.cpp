class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int small = *min_element(nums.begin(),nums.end());
        int larg = *max_element(nums.begin(),nums.end());
        vector<int>freq(larg+1,0);
        vector<int>ans;
        for(int num : nums){
            freq[num]++;
        }
        for(int i = small; i<=larg; i++){
            if(freq[i]==0){
                ans.push_back(i);
            }
        }
        return ans;


        
    }
};