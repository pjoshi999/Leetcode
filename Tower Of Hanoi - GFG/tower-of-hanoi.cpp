//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    
    void solve(int N, int a, int b, int c, long long int &count) {
        if(N == 0) {
            return;
        }
        solve(N-1, a, c, b, count);
        count++;
        cout<<"move disk "<<N<<" from rod "<<a<<" to rod "<<b<<endl;
        solve(N-1, c, b, a, count);
    }
    
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        long long int count = 0;
        solve(N, from, to, aux, count);
        return count;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.
// } Driver Code Ends