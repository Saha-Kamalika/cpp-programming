class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        unordered_map<int, bool> visited;
        queue<int> q;
        q.push(0);
        visited[0] = 1;
        
        while(!q.empty()){
            int frontNode= q.front();
            q.pop();
            ans.push_back(frontNode);
            
            for(auto i: adj[frontNode]){
                if(!visited[i]){
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
        return ans;
    }
};
