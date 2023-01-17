//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int K) {
        // code here
        int low = 0,high = n-1;
        int mid;
        while(low < high){
           mid =  (high + low)/2;
           if(K  <= arr[mid])
                high = mid;
            else
                low = mid + 1 ;
                
        }
        if(arr[low]  == K)
            return low;
        else
            return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends