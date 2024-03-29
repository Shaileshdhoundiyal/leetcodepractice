//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        // Code here
        map<int,int>mp;
        vector<int>v;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        for(auto itr = mp.begin() ; itr != mp.end() ; itr++){
            if(itr -> second > n/3)
                v.push_back(itr -> first);
        }
        if(v.size() == 0){
            v.push_back(-1);
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends