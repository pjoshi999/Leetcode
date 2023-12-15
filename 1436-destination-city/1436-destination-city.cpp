class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> mp;
        for (const auto& path : paths) {
            mp.insert(path[0]);
        }
        for (const auto& path : paths) {
            if (mp.find(path[1]) == mp.end()) {
                return path[1];
            }
        }
        return "";
    }
};