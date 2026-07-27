class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int point = 0;
        int ans = 0;
        for(int i = 0 ; i<gain.size();i++){
            point += gain[i];
            if(ans<point){
                ans = point;
            }
        }
        return ans;
        
    }
};