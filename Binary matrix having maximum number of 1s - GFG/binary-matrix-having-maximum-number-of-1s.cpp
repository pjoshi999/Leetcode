//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        //code here
        vector<int> res;
        int total1 = 0;
        int temp = 0;
        int row = 0;
        for(int i=0; i<mat.size(); i++) {
            int start = 0;
            int end = mat[i].size()-1;
            while(start <= end) {
                int mid = start + (end - start)/2;
                if(mat[i][mid] == 1) {
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            }
            total1 = max(total1, N-start);    //end-start+1
            if(temp != total1) {
                row = i;
                temp = total1;
            }
        }
        res.push_back(row);
        res.push_back(total1);
        return res;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends