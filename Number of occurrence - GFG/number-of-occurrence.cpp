//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int firstOccurence(int arr[], int n, int x) {
	    int start = 0;
	    int end = n-1;
	    int first = 0;
	    while(start <= end) {
	        int mid = start + (end-start)/2;
	        if(x == arr[mid]) {
	            first = mid;
	            end = mid - 1;
	        }
	        else if (x > arr[mid]) {
	            start = mid + 1;
	        }
	        else {
	            end = mid - 1;
	        }
	    }
	    return first;
	}
	
	int lastOccurence(int arr[], int n, int x) {
	    int start = 0;
	    int end = n-1;
	    int last = -1;
	    while(start <= end) {
	        int mid = start + (end-start)/2;
	        if(x == arr[mid]) {
	            last = mid;
	            start = mid + 1;
	        }
	        else if (x > arr[mid]) {
	            start = mid + 1;
	        }
	        else {
	            end = mid - 1;
	        }
	    }
	    return last;
	}
	
	int count(int arr[], int n, int x) {
	    // code here
	    int first = firstOccurence(arr, n, x);
	    int last = lastOccurence(arr, n, x);
	    int freq = last - first + 1;
	    return freq;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends