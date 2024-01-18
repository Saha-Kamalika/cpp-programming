class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> dist(V, INT_MAX);
        //for(int i=0; i<V; i++) dist[i]=INT_MAX;
        
        set<pair<int, int>> s;
        
        dist[S]=0;
        s.insert(make_pair(0, S));
        while(!s.empty()){
            auto top= *(s.begin());
            int nodeDist= top.first;
            int node= top.second;
            s.erase(top);
            for(auto n: adj[node]){
                if(nodeDist + n[1] < dist[n[0]]){
                    auto record= s.find(make_pair(dist[n[0]], n[0]));
                    if(record!=s.end()) s.erase(record);
                    dist[n[0]]= nodeDist + n[1];
                    s.insert(make_pair(dist[n[0]], n[0]));
                }
            }
        }
        return dist;
    }
};
