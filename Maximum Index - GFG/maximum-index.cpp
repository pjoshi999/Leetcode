//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        vector<int> LMin(n);
        vector<int> RMax(n);
        
        LMin[0] = arr[0];
        for(int i=1; i<n; i++) {
            LMin[i] = min(LMin[i-1], arr[i]);
        }
        
        RMax[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--) {
            RMax[i] = max(RMax[i+1], arr[i]);
        }
        
        int i=0;
        int j=0;
        int maxi = 0;
        while(i<n && j < n) {
            if(LMin[i] <= RMax[j]) {
                maxi = max(maxi, j-i);
                j++;
            }
            else {
                i++;
            }
        }
        return maxi;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends