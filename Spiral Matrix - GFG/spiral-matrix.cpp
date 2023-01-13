//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        vector<int>v;
        int top =0 , left = 0 , right = m -1 , bottom = n-1;
        while(top <= bottom && left <= right){
            int i = left;
            while(i <= right){
                v.push_back(a[top][i]);
                i++;
            }
            top++;
            i = top;
            while(i <= bottom){
                v.push_back(a[i][right]);
                i++;
            }
            right--;
            i = right;
            while(i >= left){
                v.push_back(a[bottom][i]);
                i--;
            }
            bottom--;
            i = bottom;
            while(i >= top){
                v.push_back(a[i][left]);
                i--;
            }
            left++;
        }
        return v[k-1];
            
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends