class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int res = 0;
        vector<int> v(26, 0);
        for(int i=0; i<chars.size(); i++) {
            v[chars[i] - 'a']++;
        }
        for(auto it: words) {
            vector<int> v1(26, 0);
            bool flag = true;
            for(auto i: it) {
                v1[i - 'a']++;
                if(v1[i - 'a'] > v[i - 'a']) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                res += it.size();
            }
        }
        return res;
    }
};