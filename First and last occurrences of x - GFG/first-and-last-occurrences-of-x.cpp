//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int firstOccurence(int arr[], int n, int x) {
    int start = 0 ;
    int end = n-1;
    int first = -1;
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(x == arr[mid]) {
            first = mid;
            end = mid - 1;
        }
        else if(x > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return first;
}
    
int lastOccurence(int arr[], int n, int x) {
    int start = 0 ;
    int end = n-1;
    int last = -1;
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(x == arr[mid]) {
            last = mid;
            start = mid + 1;
        }
        else if(x > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return last;
}

vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> v;
    int first = firstOccurence(arr, n,  x);
    int last = lastOccurence(arr, n, x);
    v.push_back(first);
    v.push_back(last);
    return v;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends