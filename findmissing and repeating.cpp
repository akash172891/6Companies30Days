//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    vector<int>findTwoElement(int arr[], int n) {
        // code here
        int sum=0,sqsum=0,sum1=0,sqsum1=0;
        for(int i=0;i<n;i++){
            sum1+=arr[i];
            sqsum1+=(arr[i]*arr[i]);
        }
        sum=(n*(n+1))/2;
        sqsum=(n*(n+1)*(2*n +1))/6;
        sqsum=(sqsum-sqsum1);
        sum=(sum-sum1);
        vector<int> ans;
        ans.push_back(((sqsum/sum)+sum)/2);
        ans.push_back(((sqsum/sum)-sum)/2);
        swap(ans[0],ans[1]);
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
