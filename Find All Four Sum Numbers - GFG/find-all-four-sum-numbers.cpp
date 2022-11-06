//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> res;
        if(arr.empty()) {
            return res;
        }
        
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for(int i=0; i<n; i++) {
            long long int target1 = k - arr[i];
            for(int j= i+1; j<n; j++) {
                int start = j+1;
                int end = n-1;
                long long int target = target1 - arr[j];
                while(start < end) {
                    int sum = arr[start] + arr[end];
                    if(sum < target) {
                        start++;
                    }
                    else if(sum > target) {
                        end--;
                    }
                    else {
                        vector<int> v = {arr[i], arr[j], arr[start], arr[end]};
                        res.push_back(v);
                        
                        while(start < end && arr[start] == arr[start+1]) start++;
                        while(start < end && arr[end] == arr[end-1]) end--;
                        start++;
                        end--;
                    }
                }
                while(j+1 < n && arr[j] == arr[j+1]) {
                    j++;
                }
            }
            while(i+1 < n && arr[i] == arr[i+1]) {
                i++;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends