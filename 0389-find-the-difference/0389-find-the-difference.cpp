class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>freq(256,0);
        for(char ch : s){
            freq[ch]++;
        }
        for(char ch : t){
            freq[ch]--;
        }
        for(int i = 0; i<256;i++){
            if(freq[i]!=0){
                return char(i);
            }
        }
        
        return '\0';
    }
};