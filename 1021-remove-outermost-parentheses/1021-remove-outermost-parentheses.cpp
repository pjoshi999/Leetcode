class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int count = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == ')') {
                count--;
            }
            
            if(count != 0) {
                res += s[i];
            }
            if(s[i] == '(') {
                count++;
            }
        }
        return res;
    }
};