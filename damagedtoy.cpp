// { Driver Code Starts
//https://www.geeksforgeeks.org/distributing-m-items-circle-size-n-starting-k-th-position/

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    int findPosition(int n, int m , int k) {
        // code here
         m=m%n;
        if(m==0 && k==1)return 1;
        if(k+m-1 <=n)return k+m-1;
        else return k+m-1-n;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M,K;
        
        cin>>N>>M>>K;

        Solution ob;
        cout << ob.findPosition(N,M,K) << endl;
    }
    return 0;
}  // } Driver Code Ends
