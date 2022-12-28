//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int sum(int arr[], int n) {
        int currSum = 0;
        for(int i=0; i<n; i++) {
            currSum += arr[i];
        }
        return currSum;
    }
    
    bool isValid(int arr[], int n, int mid, int target) {
        int currSum = 0;
        int student = 1;
        for(int i=0; i<n; i++) {
            currSum += arr[i];
            if(currSum > mid) {
                student++;
                currSum = arr[i];
                if(student > target) {
                    return false;
                }
            }
        }
        return true;
    }
    
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(N < M) {
            return -1;
        }
        
        int total = sum(A, N);
        int maxi = *max_element(A, A+N);
        int start = maxi;
        int end = total;
        int res = -1;
        while(start <= end) {
            int mid = start + (end - start)/2;
            if(isValid(A, N, mid, M) == true) {
                res = mid;
                end = mid - 1;
                // cout<<"End: "<<start<<" "<<end<<" "<<mid<<" "<<res<<endl;
            }
            else {
                start = mid + 1;
                // cout<<"Start: "<<start<<" "<<end<<" "<<mid<<endl;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends