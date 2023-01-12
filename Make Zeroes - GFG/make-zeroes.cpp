//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
        int M = matrix.size();
        int N = matrix[0].size();
        vector<vector<int>>mat  = matrix;
        for(int i = 0 ; i < matrix.size() ; i++){
           for(int j = 0 ; j < matrix[i].size() ; j++){
              if(mat[i][j] == 0){
                if(j < N-1){
                    matrix[i][j] += mat[i][j+1];
                      matrix[i][j+1] = 0;
                    }
        
                 if(j > 0){
                     matrix[i][j] += mat[i][j-1];
                      matrix[i][j-1] = 0;
                    }
                 if(i < M-1){
                     matrix[i][j] += mat[i+1][j];
                      matrix[i+1][j]=0;
                    }
                    if(i > 0){
                     matrix[i][j] += mat[i-1][j];
                      matrix[i-1][j] = 0;
                    }
               }
                
             }  
         }
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.MakeZeros(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends