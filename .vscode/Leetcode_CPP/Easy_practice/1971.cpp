#include <queue>
#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> adj;
        for(auto e: edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool> visited(n,0);
        queue<int> q;
        q.push(source);
        visited[source] = 1;
        while (!q.empty()){
            int cur = q.front();
            q.pop();
            if(cur==destination)
                return 1;
            for(auto &node:adj[cur]){
                if (!visited[node]){
                    visited[node]=1;
                    q.push(node);
                }
            }
    
            
        }
        return false;

    }
};