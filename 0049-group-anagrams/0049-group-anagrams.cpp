class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> v;
        for(int i=0; i<strs.size(); i++) {
            string key = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(key);
        }
        for(auto it=mp.begin(); it!=mp.end(); it++) {
            v.push_back(it->second);
        }
        return v;
    }
};