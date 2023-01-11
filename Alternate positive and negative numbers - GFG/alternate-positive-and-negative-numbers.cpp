//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos;
	    vector<int>neg;
	    for(int i = 0 ; i < n ; i++){
	        if(arr[i] < 0)
	           neg.push_back(arr[i]);
	       else
	           pos.push_back(arr[i]);
	    }
	    int pos_index = 0 , neg_index = 0;
	    for(int i = 0 ; i < n ; i++){
	        if( ( neg_index >= neg.size() )  || (i % 2 ==0 && pos_index < pos.size() ) ){
	            arr[i] = pos[pos_index];
	            pos_index++;
	        }
	        else{
	            arr[i] = neg[neg_index];
	            neg_index++;
	        }
	    }
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends