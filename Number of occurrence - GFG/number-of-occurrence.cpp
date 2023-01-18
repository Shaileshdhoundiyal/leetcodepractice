//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		int count(int arr[], int n, int x) {

	int low = 0 , high = n-1 , mid = 0 ,left = 0,right = 0;
    while(low < high -1){
        mid = (low + high)/2;
        if(arr[mid] < x)
            low = mid;
        else
            high = mid;
        
    }
    if(arr[low] == x)
        left = low;
    else if(arr[high] == x)
        left = high;
    else
        left = -1;;
        
    low = 0 ,high = n-1;
    while(low < high -1){
        mid = (low + high)/2;
        if(arr[mid] <= x)
            low = mid;
        else
            high = mid;
    }
    if(arr[high] == x)
        right = high;
    else if(arr[low] == x)
        right = low;
    else
        right = -1;
    //cout<<left<<" "<<right<<endl;
    if(left == -1 || right == -1)
        return 0;
    else
        return right - left +1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends