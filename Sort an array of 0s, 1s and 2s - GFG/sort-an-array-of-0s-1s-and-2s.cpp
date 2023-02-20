//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        int l=0;
        int m=0;
        int h=n-1;
        while(m <= h) {
            if(arr[m] == 0) {
                swap(arr[m], arr[l]);
                l++;
                m++;
            }
            else if(arr[m] == 1) {
                m++;
            }
            else if(arr[m] == 2) {
                swap(arr[m], arr[h]);
                h--;
            }
        }
    }
    
    // t.c. = O(n);
    // s.c. = O(1);
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends