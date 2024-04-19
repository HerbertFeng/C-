#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty()){
            return 0;
        }
        int m = matrix.size();
        int n = matrix[0].size();
        int sz = 0;
        vector<vector<int>> dp(m+1, vector<int>(n+1,0));
        for (int i =0; i<m; i++){
            for (int j=0; j<n; j++){
                if (matrix[i][j]=='1'){
                    dp[i+1][j+1] = min(dp[i][j],min(dp[i+1][j],dp[i][j+1]))+1;
                    sz = max(sz,dp[i+1][j+1]);
                }
            }
        }
        return sz*sz;
    }
};