class Solution {
  public:
    void dfs(int node, unordered_map<int, bool> &visited, vector<int> adj[], vector<int> &component){
        component.push_back(node);
        visited[node]=1;
        
        for(auto i: adj[node]){
            if(!visited[i]){
                dfs(i, visited, adj, component);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> component;
        unordered_map<int, bool> visited;
        for(int i=0; i<V; i++){
            if(!visited[i]){
                dfs(i, visited, adj, component);
            }
        }
        return component;
    }
};
