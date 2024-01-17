class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycleBFS(int curr, unordered_map<int, bool> &visited, vector<int> adj[]){
        unordered_map<int, int> parent;
        parent[curr]=-1;
        visited[curr]=1;
        queue<int> q;
        q.push(curr);
        
        while(!q.empty()){
            int front= q.front();
            q.pop();
            for(auto n: adj[front]){
                if(visited[n]==true and n!=parent[front]) return true;
                else if(!visited[n]){
                    q.push(n);
                    visited[n]=1;
                    parent[n]=front;
                }
            }
        }
        return false;
    }
    bool isCycleDFS(int curr, int parent, unordered_map<int, bool> &visited, vector<int> adj[]){
        visited[curr]=1;
        for(auto n: adj[curr]){
            if(!visited[n]){
                bool ans= isCycleDFS(n, curr, visited, adj);
                if(ans) return true;
            }
            else if(n!=parent) return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int, bool> visited;
        for(int i=0; i<V; i++){
            if(!visited[i]){
                bool ans= isCycleDFS(i, -1, visited, adj);
                if(ans==1) return true;
            }
        }
        return false;
    }
};
