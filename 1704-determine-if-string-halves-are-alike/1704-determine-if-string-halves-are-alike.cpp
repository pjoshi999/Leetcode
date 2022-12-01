class Solution {
public:
    bool halvesAreAlike(string s) {
        int count = 0;
        int count1 = 0;
        for(int i=0; i<s.size()/2; i++) {
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
                count++;
            }
        }
        
        for(int i=s.size()/2; i<s.size(); i++) {
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
                count1++;
            }
        }
        
        if(count == count1) 
            return true;
        return false;
    }
};