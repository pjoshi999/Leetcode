class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size() < ransomNote.size()) {
            return false;
        }
        unordered_map<char, int> mp;
        for(int i=0; i<magazine.size(); i++) {
            mp[magazine[i]]++;
        }
        for(int i=0; i<ransomNote.size(); i++) {
            if(mp.find(ransomNote[i]) != mp.end()) {
                mp[ransomNote[i]]--;
                if(mp[ransomNote[i]] == 0) {
                    mp.erase(ransomNote[i]);
                }
            }
            else {
                return false;
            }
        }
        return true;
    }
};