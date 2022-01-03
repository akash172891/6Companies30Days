//https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1#
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string s){
        // code here 
       /* vector<int>arr;
        string ans="";
        stack<char>c;
        int count=0;
        bool f=true;
        string t="123456789";
        for(int i=0;i<s.length();i++){
            if(s[i]=='I'){
                
                while(!c.empty()){
                    ans+=c.top();
                    c.pop();
                }
                
                ans+=t[count];
                count++;
                if(i==s.length()-1) ans+=t[count];
            }
            else if(s[i]=='D'){
                c.push(t[count]);
                count++;
                if(i==s.length()-1 || i==0){
                    c.push(t[count]);
                    count++;
                }
            }
            
        }
        while(!c.empty()){
            ans+=c.top();
            c.pop();
        }
        return ans;*/
        string ans;
        stack<int> st;
        int num = 1;
        for(auto it:s){
            if(it == 'D'){
                st.push(num);
                num++;
            }
            else{
                st.push(num);
                num++;
                while(!st.empty()){
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num);
        while(!st.empty()){
            ans += to_string(st.top());
            st.pop();
        }
        return ans;
        
        
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
