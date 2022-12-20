class Solution {
public:
    string reverseWords(string s) {
        stringstream SS(s);
        string token = "";
        string res = "";
        while (SS >> token) {
            res = token + " " + res;
        }
        return res.substr(0, res.size()-1);
    }
};