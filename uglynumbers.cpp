//https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	   ull arr[n+1];
       arr[1]=1;
       int c2=1,c3=1,c5=1;
       
       for(int i=2;i<=n;i++)
       {
          ull a2=arr[c2]*2, a3=arr[c3]*3, a5=arr[c5]*5;
          arr[i]=min(a2,min(a3,a5));
          
           if(arr[i]==a2)c2++;
           if(arr[i]==a3)c3++;
           if(arr[i]==a5)c5++;
       }
       return arr[n];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
