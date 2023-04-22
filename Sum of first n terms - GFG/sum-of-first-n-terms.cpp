//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void solve(long long N, long long &res) {
        if(N == 0) {
            return;
        }
        res += N*N*N;
        solve(N-1, res);
    }
  
    long long sumOfSeries(long long N) {
        // code here
        long long res = 0;
        solve(N, res);
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends