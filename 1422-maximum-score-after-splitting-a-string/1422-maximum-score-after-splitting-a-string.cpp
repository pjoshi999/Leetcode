class Solution {
public:
    int maxScore(string s) {
        int count0 = 0;
        int count1 = 0;
        int res = 0;

        for(int i=0; i<s.size(); i++) {
            if(s[i] == '1') {
                count1++;
            }
        }

        for(int i=0; i<s.size()-1; i++) {
            if(s[i] == '0') {
                count0++;
            }
            else if(s[i] == '1') {
                count1--;
            }
            res = max(res, count0 + count1);
        }
        return res;
    }
};

// t.c = O(n)
// s.c = O(1)