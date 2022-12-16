class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int i=0; 
        int j=0;
        int res = 0;
        while(j<s.size()) {
            mp[s[j]]++;
            if(mp.size() < j-i+1) {
                while(mp.size() != j-i+1) {
                    mp[s[i]] -= 1;
                    if(mp[s[i]] == 0) {
                        mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
            else if(mp.size() == j-i+1) {
                res = max(res, j-i+1);
                j++;
            }
        }
        return res;
    }
};