//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        long long int low = 0;
        long long int high = n-1;
        long long mid = 0;
        while(low < high-1){
            mid = (low + high)/2;
            if(x < v[mid]){
                high = mid;
                //cout<<high<<endl;
            }
            else{
                low = mid;
                //cout<<low<<endl;
            }
        }
        //cout<<low<<" "<<v[low]<<" "<< high<<endl;
        if(low == 0 )
            return -1;
        else if(x >= v[high] )
            return high;
        else
            return low;
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends