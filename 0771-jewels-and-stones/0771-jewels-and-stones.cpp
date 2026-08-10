/*class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = jewels.size();
        int s = stones.size();
        int count = 0;
        for(int i = 0; i<n;i++){
            for(int j = 0 ; j<s;j++){
                if(jewels[i] == stones[j]){
                    count++;
                }
            }
        }
        return count;
    }
};*/
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int num = 0;
        for (int i = 0; i < jewels.size(); i++){
        num += count(stones.begin(), stones.end(), jewels[i]);
    }
    return num;
    }
};