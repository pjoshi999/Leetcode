//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        int i = 0;
        int j = arr.size()-1;
        int diff = INT_MAX;
        vector<int> v;
        while(i < j) {
            int sum = arr[i] + arr[j];
            if(abs(x-sum) < diff) {
                v = {arr[i], arr[j]};
                diff = min(diff, abs(x-sum));
            }
            if(sum < x) {
                i++;
            }
            else {
                j--;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends