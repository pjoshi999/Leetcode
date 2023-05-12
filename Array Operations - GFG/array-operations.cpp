//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
        int res = 0;
        int temp = 0;
        bool flag = false;
        for(int i=0; i<n; i++) {
            if(arr[i] == 0) {
                flag = true;
                if(temp > 0) {
                    res++;
                    temp = 0;
                }
            }
            else {
                temp++;
            }
        }
        if(temp > 0 && flag) res++;
        if(temp == 0 && res == 0) return 0;
        return res == 0 ? -1 : res;
    }
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
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends