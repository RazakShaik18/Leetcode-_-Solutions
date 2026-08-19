class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int pos = 0;
        int cnt = 0;

        for (char ch : moves) {
            if (ch == 'R') {
                pos++;
            }
            else if (ch == 'L') {
                pos--;
            }
            else {
                cnt++;
            }
        }

        //return abs(pos) + cnt;
       return max(abs(pos + cnt), abs(pos - cnt));
    }
};