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
        string str = "";
        for(int i=0; i<26; i++) {
            if(common[i] > 0) {
                int range = common[i];
                while(range--) {
                    str += char(i+'a');
                    res.push_back(str);
                    str="";
                }
            }
        }
        return res;
    }
};