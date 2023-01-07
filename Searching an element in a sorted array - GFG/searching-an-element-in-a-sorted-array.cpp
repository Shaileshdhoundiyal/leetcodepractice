//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int k) 
    { 
    
       // Your code here
       int end = N-1,start = 0,mid = 0;
       while(start < end){
           mid = (end +start)/2;
           if(k <= arr[mid])
                end = mid;
            else
                start = mid + 1;
       }
       if(arr[start]==k)
        return 1;
       else
            return -1;
        
       
       
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends