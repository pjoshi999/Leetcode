class Solution {
public:
    string removeStars(string s) {
        string res = "";
        stack<char> st;
        for(int i=0; i<s.size(); i++) {
            if(isalpha(s[i])) {
                st.push(s[i]);
            }
            else if(s[i] == '*') {
                st.pop();
            }
        }
        while(!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};