//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        // Your code here
        map<int,int>m;
        int sum = 0, maxx_len = 0;
        for(int i = 0 ; i < n ; i++){
            sum += arr[i];
            if(sum == 0)
                maxx_len = max(maxx_len,i+1);
            else if(m[sum] != 0){
                maxx_len = max(maxx_len,i - m[sum] +1) ;
            }
            else
                m[sum] = i+1;
        }
        return maxx_len;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends