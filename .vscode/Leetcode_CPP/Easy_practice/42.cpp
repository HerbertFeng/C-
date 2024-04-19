#include <vector>
#include <iostream>
using namespace std;


int trap(vector<int> height) {
        int n = height.size();
        int left[n], right[n];
        left[0] = height[0];
        right[n-1] = height[n-1];
        for (int i =1; i<n; ++i){
            left[i] = max(height[i],left[i-1]);
            right[n-i-1] = max(height[n-i-1],right[n-i]);
        }
        int ans = 0;
        for (int i = 0; i<n; ++i){
            ans+= min(left[i],right[i])-height[i];
        }
        return ans;
    }