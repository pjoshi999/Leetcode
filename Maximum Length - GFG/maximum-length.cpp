//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
        int maxNum = max({a, b, c});
        if(maxNum <= 2*((a+b+c) - maxNum + 1)) {   // +1 is for extra 2 characters at last
            return a+b+c;
        }
        else {
            return -1;
        }
    }
};

// When you did not get the problems, let start iterate through the given example.Here we are given that answer should be either take all(a+b+c) when combination is possible or return -1 in else case.

// Now, a+b+c is possible only when there are less than 3 consecutive repeating character.

// Let us start exploring by taking smaller example to get our logic for code.Let us find maximum value of a to return a+b+c when b=1 and c = 0.Possible combination would be aabaa.

// Again, find maximum value of a for b=1  and c = 1.answer is aabaacaa.
// Clearly we can observe the pattern that for every max character to embedded[max two repetition] for every smaller character and 2 extra character can be tolerated at end side.

// So,we will return a+b+c only when maxNum<=(2*(a+b+c-maxNum+1)) here +1 for extra last two character.

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends