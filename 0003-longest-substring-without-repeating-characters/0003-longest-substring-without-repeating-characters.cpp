class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int res = 0;
        int start = -1;
        for(int i=0; i!=s.size(); i++) {
            if(dict[s[i]] > start) {
                start = dict[s[i]];
            }
            dict[s[i]] = i;
            res = max(res, i-start);
        }
        return res;
    }
};

// Click on notes button on right side of the editor..