//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int KthMissingElement(int a[], int n, int k);


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}

// } Driver Code Ends


int KthMissingElement(int a[], int n, int k)
{
    // Complete the function
    int low = 0,high = n-1;
    int mid = 0;
    if(a[high] - a[low] - n < k)
        return -1;
    while(low < high-1){
        mid = (low + high)/2;
        if((a[mid] - a[low] - (mid - low) ) >= k){
                high = mid;
        }
        else{
            k -= (a[mid] - a [low] - (mid - low));
            low = mid;
        }
    }
    return a[low] + k;
    
}