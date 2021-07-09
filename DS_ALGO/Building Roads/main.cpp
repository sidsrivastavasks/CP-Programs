#include <bits/stdc++.h>
using namespace std;

int mx=1e5;
vector<vector<int> > adj(mx);
vector<bool> visited(mx,false);

void bfs(int node){
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){

        int curr = q.front();
        q.pop();

        for(auto it : adj[curr]){
            if(!visited[it]){
                visited[it] = true;
                q.push(it);
            }
        }

    }

}


int main()
{
	int n,m;
	cin>>n>>m;

	for(int i = 1; i<=m; i++){
        int a,b;
        cin>>a>>b;
        --a,--b;
        adj[a].push_back(b);
        adj[b].push_back(a);

	}
	vector<int> path;
	for(int i = 0; i<n; i++){
        if(!visited[i]){
            path.push_back(i);
            bfs(i);
        }
	}

	cout<<path.size()-1<<endl;
	for(int i = 1; i<path.size(); i++){
        cout<<path[0]+1<<" "<<path[i]+1<<endl;
	}

    return 0;
}
