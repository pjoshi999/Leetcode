//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        // Code here
        int res = 0;
        for(int i=0; i<n; i++) {
            res = __gcd(res, arr[i]);
        }
        return res;
    }
    
    // int minimumNumber(int n,vector<int> &arr){
    //     int mini=*min_element(arr.begin(),arr.end());
    //   // sort(arr.begin(),arr.end());
    //   int ans=mini;
    //      for(int i=0;i<n;i++){
    //          if(arr[i]%mini){
    //              ans=min(ans,arr[i]%mini);
    //          }
    //      }
    //      return ans;
    // }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.minimumNumber(n,arr)<<endl;
    }
}
// } Driver Code Ends