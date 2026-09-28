class Solution {
public:
    string largestEven(string num) {
        while (!num.empty() && (num.back() - '0') % 2 != 0) {
            num.pop_back();
        }

        return num;
    }
};