class Solution {
public:
    int findClosest(int x, int y, int z) {
        int per1 = abs(z-x);
        int per2 = abs(z-y);

        if(per1 == per2){
            return 0;
        }
        else if(per1<per2){
            return 1;
        }
        return 2;
    }
};