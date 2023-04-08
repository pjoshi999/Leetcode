//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    
    void del(stack<int> &s, int i) {
        if(i == 0) {
            s.pop();
            return;
        }
        int ele = s.top();
        s.pop();
        // cout<<"ele:"<<ele<<" top:"<<s.top()<<endl;
        del(s, i-1);
        s.push(ele);
    }
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here..
        // if(s.size() == (s.size()/2)+1) {
        //     return;
        // }
        int i = sizeOfStack/2;
        del(s, i);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends