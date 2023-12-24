class Solution {
public:
    int minOperations(string s) {
        int count = 0;
        int n = s.size();
        if(s.size() == 1) {
            return 0;
        }
        // Handling 0,1,0,1,.. case
        for(int i=0; i<s.size(); i++) {
            if(i%2 == 0 && s[i]=='1') count++;   // if 1 is present in even index 
            if(i%2 == 1 && s[i]=='0') count++;   // if 0 is present in odd index
        }
        return min(count, n-count);  // n-count to handle 1,0,1,0,.. case
    }
};

// When alternating starting from 0, 
// the digit '0' should appear at all even positions (0, 2, 4, 6, etc.), 
// while the digit '1' should appear at all odd positions (1, 3, 5, 7, etc.).

// If the minimum is obtained by counting in an alternating sequence starting from '1',
// that case is handled with 'n - count'.