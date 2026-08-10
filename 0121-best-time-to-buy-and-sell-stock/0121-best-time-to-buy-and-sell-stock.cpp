class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // this method will pass only 201/212 testcases 
        int n = prices.size();
        int maximum = 0;
        /*for(int i = 0;i<prices.size();i++){
            for(int j = i+1;j<prices.size();j++){
                int profit = 0;
                profit = prices[j]-prices[i];
                maximum = max(maximum,profit);
            }
        }*/
        int bb = prices[0];
        for(int i = 1; i<n; i++){
            if(prices[i]>bb){
                maximum = max(maximum,prices[i]-bb);
            }

            bb = min(bb,prices[i]);
        }

        return maximum;
    }
};