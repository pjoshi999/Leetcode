class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        for(int i=0; i<s.size(); i++) {
            mp[s[i]]++;
        }
        for(int i=0; i<s.size(); i++) {
            char key = s[i];
            auto temp = mp.find(key);
            if(mp.find(key) != mp.end() && temp->second == 1) {
                return i;
            }
        }
        return -1;
    }
};