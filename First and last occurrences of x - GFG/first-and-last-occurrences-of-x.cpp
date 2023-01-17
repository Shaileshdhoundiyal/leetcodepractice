//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> v;
    int low = 0 , high = n-1 , mid = 0 ;
    while(low < high -1){
        mid = (low + high)/2;
        if(arr[mid] >= x)
            high = mid;
        else
            low = mid;
        
    }
    if(arr[low] == x)
        v.push_back(low);
    else if(arr[high] == x)
        v.push_back(high);
    else
        v.push_back(-1);
    low = 0 ,high = n-1;
    while(low < high -1){
        mid = (low + high)/2;
        if(arr[mid] <= x)
            low = mid;
        else
            high = mid;
    }
    if(arr[high] == x)
        v.push_back(high);
    else if(arr[low] == x)
        v.push_back(low);
    else
        v.push_back(-1);
    return v;
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends