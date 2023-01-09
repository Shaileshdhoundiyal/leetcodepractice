//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends


class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here
        long long  first_smallest = arr[0];
        long long second_smallest = arr[1];
        long long maxx = arr[0] + arr[1];
        for(long long int i = 2 ; i < N ; i++){
            long long int sum = second_smallest + arr[i];
            maxx = max(maxx,sum);
            first_smallest = second_smallest;
            second_smallest = arr[i];
        }
        return maxx;
        
    }
};



//{ Driver Code Starts.
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
	    for(ll i=0;i<n;i++)
		    cin>>a[i];
		Solution ob;
	    cout<<ob.pairWithMaxSum(a,n)<<endl;
	}
	return 0;
}


// } Driver Code Ends