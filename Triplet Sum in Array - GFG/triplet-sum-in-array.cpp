//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A, A+n);
        for(int i=0; i<n-2; i++) {
            if(i==0 || (i>0 && A[i] != A[i-1])) {
                int start = i+1;
                int end = n-1;
                int target = X - A[i];
                
                while(start < end) {
                    int sum = A[start] + A[end];
                    if(sum > target) {
                        end--;
                    }
                    else if(sum < target) {
                        start++;
                    }
                    else {
                        return true;
                    }
                }
            }
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends