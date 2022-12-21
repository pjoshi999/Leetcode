class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        string res = "";
        for(int i=0; i<s.size(); i++) {
            mp[s[i]]++;
        }
        vector<pair<int, char>> v;
        for(auto it: mp) {
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end(), greater<pair<int, char>>());
        for(auto it: v) {
            while(it.first > 0) {
                res += it.second;
                it.first -= 1;
            }
        }
        
        return res;
    }
};