class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> str1(26, 0);
        vector<int> str2(26, 0);
        
        if(s.size() != t.size()) return false;
        
        for(int i=0; i<s.size(); i++) {
            str1[s[i]-'a']++;
            str2[t[i]-'a']++;
        }
        
        if(str1==str2) {
            return true;
        }
        return false;
    }
};