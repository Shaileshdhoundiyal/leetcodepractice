//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool check(vector<int>&nums,int key,int mid){
      int result = 0;
      for(auto x : nums){
          result += ceil((float)x/mid);
      }
      if(result <= key)
        return true;
      else
        return false;
  }
    int smallestDivisor(vector<int>& nums, int K) {

        // Write your code here.
        int low = 1 , high = 0;
        for(auto i : nums)
            high = max(high,i);
        int mid,ans=0;
        while(low <= high){
            mid = (low + high)/2;
            if(check(nums,K,mid)){
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends