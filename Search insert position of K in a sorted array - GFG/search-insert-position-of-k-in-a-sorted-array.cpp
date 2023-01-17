//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>arr, int N, int K)
    {
        // code here
        int low = 0, high = N-1;
        int mid = 0;
        while(low < high-1){
            mid = (low + high)/2;
            if(K < arr[mid])
                high = mid;
            else
                low = mid;
        }
        if(K == arr[low])
            return low;
        else if(K == arr[high])
            return high;
        else if(K > arr[low] && K < arr[high])
            return low+1;
        else if(K > arr[high])
            return high +1;
        else
            return low;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends