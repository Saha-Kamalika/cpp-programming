#include<bits/stdc++.h>
using namespace std;
bool isValid(int x,int y,int m,int n){
    return (x>=0 and x<m and y>=0 and y<n);
}
int bfs(int x,int y,int m,int n,vector<vector<char>> &mat){
    queue<pair<pair<int,int>,int>> q;
    q.push({{x,y},0});
    vector<vector<bool>> visited(m, vector<bool>(n,false));
    visited[x][y]=true;

    int ans=0;
    vector<pair<int,int>> directions={{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
    while(!q.empty()){
        int sz=q.size();
        while(sz--){
            int xz=q.front().first.first;
            int yz=q.front().first.second;
            int time=q.front().second;
            q.pop();
            ans=max(ans,time);

            for(auto &dir: directions){
                int nx=xz+dir.first;
                int ny=yz+dir.second;
                if(isValid(nx,ny,m,n) and mat[nx][ny]=='T' and visited[nx][ny]==false){
                    visited[nx][ny]=true;
                    q.push({{nx,ny},++time});
                }
            }
        }
    }
    return ans;
}
int main(){
    int m, n;
    cin>>m>>n;
    int x,y;
    cin>>x>>y;
    vector<vector<char>> mat(m,vector<char>(n));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int ans=bfs(x-1,y-1,m,n,mat);
    cout<<ans;
    return 0;
}