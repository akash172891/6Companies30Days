// https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int doOverlap(int l1[], int r1[], int l2[], int r2[]) {
        // code here
        int lc1[]={l1[0],r1[1]};
        int rc1[]={r1[0],l1[1]};
        int lc2[]={l2[0],r2[1]};
        int rc2[]={r2[0],l2[1]};
        
        //left right
        if(r2[0]<l1[0] || lc2[0]>rc1[0]) return false;
        //up down
        if(rc1[1]<lc2[1] || r1[1]>l2[1]) return false;
        //overlapped
        return true;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}  // } Driver Code Ends
