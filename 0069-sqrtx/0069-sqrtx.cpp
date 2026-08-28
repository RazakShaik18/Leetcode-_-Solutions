class Solution {
public:
    int mySqrt(int x) {
        int sq = 0;
        for(int i = 1; i<=x ; i++){
            if(1ll*i*i<=x){
                sq= i;
            }
            else{
                break;
            }
        }
        return sq;
        
    }
};