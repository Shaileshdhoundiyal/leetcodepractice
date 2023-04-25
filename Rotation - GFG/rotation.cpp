//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int low = 0 ,high = n-1;
	    int mid = 0;
	    while(low < high-1){
	        mid = ( low + high ) /2;
	        if(arr[low] < arr[mid] && arr[high] > arr[mid])
	            return low;
	        if(arr[low] < arr[mid])
	            low = mid+1;
	        else
	            high = mid;
	    }
	    if(arr[low] < arr[high])
	        return low;
	    else
	        return high;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends