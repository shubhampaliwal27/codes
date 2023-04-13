//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        if(N==0)
        return "";
        if(N==1)
        return arr[0];
        sort(arr,arr+N);
        int msize=min(arr[0].size(),arr[N-1].size());
        string first=arr[0],last=arr[N-1];
        int i=0;
        while(i<msize&& first[i]==last[i]){
            i++;
        }
        if(i!=0){
            string ans=first.substr(0,i);
            return ans;
        }
        return "-1";
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends