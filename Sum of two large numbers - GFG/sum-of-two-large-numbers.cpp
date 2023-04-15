//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string x, string y) {
        // Your code goes here
        int n1=x.length()-1;
        int n2=y.length()-1;
        int c=0;
        string ans;
        while(n1>=0 || n2>=0){
            if(n1<0){
                char a=((y[n2]-48+c)%10)+48;
                ans.push_back(a);
                c=(c+y[n2]-48)/10;
                n2--;
            }
            
            else if(n2<0){
                char a=((x[n1]-48+c)%10)+48;
                c=(c+x[n1]-48)/10;
                ans.push_back(a);
                n1--;
                
            }
            else{
                 char a=((x[n1]-48+y[n2]-48+c)%10)+48;
                 c=(c+x[n1]-48+y[n2]-48)/10;
                 ans.push_back(a);
                 n1--;
                 n2--;
            }
        }
        if(c){
            ans.push_back(c+48);
        }
        int i=0,n=ans.length();
        reverse(ans.begin(),ans.end());
        for(i=0; i<n; i++){
            if(ans[i]!='0')
            break;
        }
        if(i==n) return "0";
        return ans.substr(i,(int)ans.size()-i+1);
        
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends