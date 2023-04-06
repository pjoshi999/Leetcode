//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        // code here
        vector<int> v(N);
        v[0] = A[0];
        for(int i=1; i<N; i++) {
            v[i] = v[i-1] + A[i];
        }
        // for(int i=0; i<N; i++) {
        //     cout<<v[i]<<" ";
        // }
        int left = 0;
        int right = 0;
        for(int i=0; i<N; i++) {
            left = v[i-1];
            right = (v[N-1] - v[i]);
            // cout<<left<<" "<<right<<endl;
            if(left == right) {
                return i+1;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends