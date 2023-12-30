class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> v(26, 0);
        if(words.size() == 1) {
            return true;
        }

        int temp = 0;
        for(auto it: words) {
            temp += it.length();
        }
        if(temp % words.size() != 0) {
            return false;
        }
        
        for(auto it: words) {
            for(auto x: it) {
                v[x-'a']++;
            }
        }
        for(int i=0; i<v.size(); i++) {
            if(v[i] % words.size() != 0) {
                return false;
            }
        }
        return true;
    }
};