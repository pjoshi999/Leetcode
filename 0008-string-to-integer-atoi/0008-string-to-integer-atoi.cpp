class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(s[i] == ' ' && i<s.size()) {
            i++;
        }
        if(i > s.size()) {
            return 0;
        }
        
        int sign = 1;
        if(s[i] == '-') {
            sign = -1;
            i++;
        } 
        else if(s[i] == '+') {
            sign = 1;
            i++;
        }
        
        long long res = 0;
        while(s[i] >= '0' && s[i] <= '9') {
            res = res*10 + (s[i]-'0');
            if(res>INT_MAX || res<INT_MIN) break;
            i++;
        }
        res = res * sign;
        if(res > INT_MAX) res = INT_MAX;
        if(res < INT_MIN) res = INT_MIN;
        return (int)res;
    }
};