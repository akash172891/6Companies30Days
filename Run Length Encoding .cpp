//https://practice.geeksforgeeks.org/problems/run-length-encoding/1/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends

/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string ans="";
  int start=0,n=src.length();
  
  for(int i=1;i<src.length();i++){
      if(src[i]!=src[i-1]){
          ans+=src[i-1];
          int count=(i-start);
          
          ostringstream str1;
          str1 << count;
          string g = str1.str();
          ans+=g;
          
          start=i;
      }
  }
        ans+=src[n-1];
          int count=(n-start);
          
          ostringstream str1;
          str1 << count;
          string g = str1.str();
          ans+=g;
          
          
  return ans;
}     
 
