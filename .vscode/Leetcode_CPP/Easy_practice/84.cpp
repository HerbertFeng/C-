#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int res = 0;
        height.push_back(0);
        vector<int> stack;

        for (int i=0; i<height.size();++i){
            while (stack.size()>0 && height[stack.back()]>=height[i]){
                int h = height[stack.back()];
                stack.pop_back();
                int w = stack.size()>0? stack.back():-1;
                res = max(res,h*(i-1-w));              
            }
            stack.push_back(i);
        }
        return res;
    }
};