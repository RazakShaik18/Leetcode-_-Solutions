class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int n = jewels.length();
        int s = stones.length();
        int count = 0;
        for(int i = 0; i<n;i++){
            for(int j = 0 ; j<s;j++){
                if(jewels.charAt(i) == stones.charAt(j)){
                    count+=1;
                }
            }
        }
        return count;
    }
}