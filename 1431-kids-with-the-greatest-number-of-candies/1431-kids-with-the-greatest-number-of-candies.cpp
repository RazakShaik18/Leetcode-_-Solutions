class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxe = *max_element(candies.begin(),candies.end());
        vector<bool>ans;
        for(int i = 0 ;i<candies.size();i++){
            int ans2 = candies[i]+extraCandies;
            if(ans2>=maxe){
                
                ans.push_back(true);
                
            }
            else{
                 
                ans.push_back(false);
                
            }

        }
        return ans;
        
    }
};