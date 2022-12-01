class Solution {
public:
    bool halvesAreAlike(string s) {
        int count = 0;
        for(int i=0; i<s.size(); i++) {
            s[i]=tolower(s[i]);
            if(i < s.size()/2) {
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                    count++;
                }
            }
            else {
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                    count--;
                }
            }
        }
        return count == 0;     // true if count is 0 and false if count is not equal to 0
    }
};