//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool check(int arr[],int n , int m,int mid){
        int count = 1;
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            if(sum + arr[i] > mid){
                count++;
                sum = arr[i];
            }
            else
                sum += arr[i];
            if(count > m)
                return false;
        }
        return true;
    }
    int findPages(int A[], int N, int M) 
    {   
        if(M > N)
            return -1;
        int mid,high = 0 , low = INT_MIN;
        int sum =0;
        for(int i = 0 ; i < N ; i++){
            sum += A[i];
            low = max(low,A[i]);
        }
        high = sum;
        int ans = high;
        while(low <= high){
            mid = (low + high)/2;
            if(check(A,N,M,mid)){
                //cout<<mid<<endl;
                ans = min(ans,mid);
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends