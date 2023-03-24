//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        // code here
        int zeroes=0,neg=0;
        int steps=0;
        for(int i=0; i<N;i++){
            if(arr[i]==0)zeroes++;
            else if(arr[i]>0)steps+=(arr[i]-1);
            else{
                neg++;
                steps+=(-arr[i]-1);
            }
        }
        if(neg%2==0) steps+= zeroes;
        else{
            if(zeroes>0) steps +=zeroes;
            else steps +=2;
        }
        return steps;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.makeProductOne(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends