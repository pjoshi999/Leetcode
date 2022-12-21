class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int res = INT_MIN;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '(') {
                count++;
                res = max(res, count);
            }
            if(s[i] == ')') {
                count--;
            }
        }
        return res == INT_MIN ? 0 : res;
    }
};