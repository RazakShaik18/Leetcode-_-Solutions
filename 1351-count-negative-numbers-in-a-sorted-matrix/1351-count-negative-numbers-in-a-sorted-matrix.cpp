class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       /* int neg = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                if(grid[i][j]<0){
                    neg++;
                }
            }
        }
        return neg;*/
        int n=grid.size();
        int m=grid[0].size();

        int row=n-1;
        int col=0;
        int cnt=0;
        while(row>=0 && col<m){
            if(grid[row][col]<0){
                cnt+=m-col;
                row--;
            }else{
                col++;
            }
        }

        return cnt;
    }
};