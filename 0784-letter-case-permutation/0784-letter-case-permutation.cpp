class Solution {
public:
    void solve(string s, string op, vector<string> &res) {
        if(s.size() == 0) {
            res.push_back(op);
            return;
        }
        string op1 = op;
        string op2 = op;
        if(isalpha(s[0])) {
            op1.push_back(tolower(s[0]));
            op2.push_back(toupper(s[0]));
            s.erase(s.begin()+0);
            solve(s, op1, res);
            solve(s, op2, res);
        }
        else {
            op1.push_back(s[0]);
            s.erase(s.begin()+0);
            solve(s, op1, res);
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        string op = "";
        solve(s, op, res);
        return res;
    }
};