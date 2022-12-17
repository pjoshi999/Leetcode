class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        int i=0;
        int j=0;
        int minSize = INT_MAX;
        int idx = -1;
        for(int i=0; i<t.size(); i++) {
            mp[t[i]]++;
        }
        int count = mp.size();
        while(j<s.size()) {
            if(mp.find(s[j]) != mp.end()) {
                mp[s[j]] -= 1;
                if(mp[s[j]] == 0) {
                    count--;
                }
            }
            if(count > 0) {
                j++;
            }
            else if(count == 0) {
                while(count == 0) {
                    // minSize = min(minSize, j-i+1);
                    if(minSize > j-i+1) {   //we found shorter window
                        minSize = j-i+1;
                        idx = i;
                    }
                    if(mp.find(s[i]) != mp.end()) {
                        if(mp[s[i]] == 0) {
                            count++;
                        }
                        mp[s[i]]++;
                    }
                    i++;
                }
                j++;
            }
        }
        return (idx == -1) ? "" : s.substr(idx, minSize);
    }
};