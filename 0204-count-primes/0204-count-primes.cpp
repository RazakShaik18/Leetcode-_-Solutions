class Solution {
public:
    int countPrimes(int n){
        int count = 0;
        vector<int>mark(n,0);
        //mark[0] = 1;
        if(n<=2){
            return 0;
        }
        //mark[1]= 1;
        for(int i =2; i*i<n; i++){
            if(mark[i]==0){
                for(int j = i*i ; j<n ; j+=i){
                    mark[j] = 1;
                }
            }
        }
        for(int  i = 2 ; i<n ; i++){
            if(mark[i]==0){
                count++;
            }
        }

        return count;
    }    

};