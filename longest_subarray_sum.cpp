#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    //Return longest subarray length Brute Force
    
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        // Complete the function
        int maxLength = 0;
        for (int i = 0; i < n; i++) {
           int sum = 0;
            for (int j = i; j < n; j++) {
              sum += arr[j];
              if (sum == k)
                maxLength = max(maxLength, (j - i + 1));
            }
        
          }
    return maxLength;
        
    } 

};
//{ Driver Code Starts.

int main() {
	//code
	
	int t;
    cout<<"Enter number of testcases";
    cin>>t;
	while(t--)
	{
	    int n, k;
        cout<<"Enter the size of array and the length\n";
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout <<"Length of the longest Sub-Array is"<< ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends