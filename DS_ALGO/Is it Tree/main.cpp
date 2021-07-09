#include <bits/stdc++.h>
using namespace std;

bool BFS(vector<int> adj[], int n){

	bool visited[n+1];
	for(int i = 0; i<=n; i++){
		visited[i] = false;
	}
	int parent[n+1];
	for(int i = 1; i<=n; i++){
		if(!visited[i]){
			queue<int> q;
			q.push(i);
			visited[i] = true;
			parent[i] = -1;
			while(!q.empty()){
				int node = q.front();
				q.pop();

				for(int pp : adj[node]){
					if(!visited[pp]){
						//cout<<pp<<" ";
						visited[pp] = true;
						q.push(pp);
						parent[pp] = node;
					}
					else if(visited[pp] && parent[node]!=pp){
						return false;
					}
				}
			}
		}
	}
	return true;

}


int main() {
	int n,m;
	cin>>n>>m;

	vector<int> adj[n+1];
	for(int i = 0; i<m; i++){
		int a,b;
		cin>>a>>b;
		//cout<<a<<" "<<b<<endl;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	if(BFS(adj,n)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

	return 0;
}
