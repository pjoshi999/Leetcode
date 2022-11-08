class Solution {
public:
    bool isPalindrome(int x) {
        int originalX = x;
        long long int ans = 0;
        while(x > 0) {
            int rem = x%10;
            ans = ans*10 + rem;
            if(ans > INT_MAX || ans < INT_MIN) {
                return false;
            }
            x = x/10;
        }
        if(originalX == ans) {
            return true;
        }
        return false;
    }
};