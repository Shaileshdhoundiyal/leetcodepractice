//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int A[], int low, int high, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int mid = 0;
        while(high > low){
            mid = (high + low)/2;
            if(A[mid] == key)
                return mid;
            else if(A[low] <= A[mid]){
                if(key < A[mid] && key >= A[low])
                    high = mid - 1;
                else
                    low = mid +1;
            }
            else{
                if(key > A[mid] && key <= A[high])
                    low = mid +1;
                else
                    high = mid -1;
            }
        }
        if(A[low] == key)
            return low;
        else
            return -1;
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends