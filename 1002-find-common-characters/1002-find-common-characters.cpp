class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> common(26, INT_MAX);
        vector<string> res;
        for(auto x: words) {
            vector<int> count(26, 0);
            for(auto ch: x) {
                count[ch - 'a']++;
            }
            
            for(auto i=0; i<26; i++) {
                common[i] = min(common[i], count[i]);
            }
        }
        
        for(int i=0; i<26; i++) {
            for(int j=0; j<common[i]; j++) {
                res.push_back(string(1, i+'a'));
            }
        }
        return res;
    }
};