class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char a : s){
            //case-01 pushing opening bracket to the stack 
            if(a == '(' || a == '{' || a == '[' ){
                st.push(a);
            }
            //cases-02 if any closing bracket comes check where the stack top contain open bracket or not 
           
            /*if(!st.empty() && ((a == ')' && st.top() != '(') || (a == ']' && st.top() != '[') || (a == '}' && st.top() != '{'))){
                return false;
            st.pop();
            }*/
            else {
                if(st.empty()) return false;

                if((a == ')' && st.top() != '(') ||
                   (a == ']' && st.top() != '[') ||
                   (a == '}' && st.top() != '{')) {
                    return false;
                }

                st.pop();
            }
        }
        return  st.empty();
        
        
        
    }
};