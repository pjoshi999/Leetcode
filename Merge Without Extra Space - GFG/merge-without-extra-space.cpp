//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i = 0;
            int j = 0;
            int k = 0;
            int v[n+m];
            while(i < n && j < m) {
                if(arr1[i] <= arr2[j]) {
                    v[k] = arr1[i];
                    i++;
                }
                else {
                    v[k] = arr2[j];
                    j++;
                }
                k++;
            }
            if(i < n) {
                while(i < n) {
                    v[k] = arr1[i];
                    i++;
                    k++;
                }
            }
            if(j < m) {
                while(j < m) {
                    v[k] = arr2[j];
                    j++;
                    k++;
                }
            }
            for(int i=0; i<n; i++) {
                arr1[i] = v[i];
            }
            for(int i=0; i<m; i++) {
                arr2[i] = v[i+n];
            }
        }
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends