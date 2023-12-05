class Solution {
public:
    int numberOfMatches(int n) {
        int res = 0;
        int temp = 0;
        while(n != 1) {
            if(n % 2 == 0) {
                temp = n/2;
                res += temp;
                n = n/2;
            }
            else {
                temp = (n-1)/2;
                res += temp;
                n = (n-1)/2 + 1;
            }
        }
        return res;
    }
};