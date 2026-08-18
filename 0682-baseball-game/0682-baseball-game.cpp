class Solution {
public:
    int calPoints(vector<string>& operations) {

        vector<int> v;
        int ans = 0;

        for(string s : operations) {

            if(isdigit(s[0]) || s[0] == '-') {
                int n = stoi(s);
                v.push_back(n);
            }
            else if(s == "C") {
                v.pop_back();
            }
            else if(s == "D") {
                v.push_back(v.back() * 2);
            }
            else if(s == "+") {
                v.push_back(v.back() + v[v.size() - 2]);
            }
        }

        for(int n : v) {
            ans += n;
        }

        return ans;
    }
};