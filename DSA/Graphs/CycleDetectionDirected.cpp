class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCycle(int curr, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsVis, vector<int> adj[]){
        visited[curr]=true;
        dfsVis[curr]=true;
        for(auto n: adj[curr]){
            if(!visited[n]){
                bool ans= isCycle(n, visited, dfsVis, adj);
                if(ans) return true;
            }
            else if(dfsVis[n] && visited[n]) return true;
        }
        dfsVis[curr]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        unordered_map<int, bool> visited;
        unordered_map<int, bool> dfsVis;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                bool ans= isCycle(i, visited, dfsVis, adj);
                if(ans) return true;
            }
        }
        return false;
    }
};
