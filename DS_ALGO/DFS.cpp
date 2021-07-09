#include<stdio.h>
#include<stdbool.h>

int graph[100][100];

void dfs(int node, bool visited[], int n){
	
	if(visited[node])
		return ;
	
	visited[node] = true;
	printf("%d ",node);
	
	//dfs traversal for each unvisited nodes
	for(int i = 0; i<n; i++){
		//printf("1");
		if(!visited[i] && graph[node][i]==1){
			//printf("1 ");
			dfs(i,visited,n);
		}
	}
	
}


int main(){
	
	int nodes,edges,start;
	printf("Enter number of nodes : ");
	scanf("%d",&nodes);
	
	//graph Input
	for(int i = 0; i<nodes; i++){
		for(int j = 0; j<nodes; j++){
			graph[i][j] = 0;
		}
	}
	
	printf("Enter the number of Edges : ");
	scanf("%d",&edges);
	
	//edges Input
	for(int i = 0; i<edges; i++){
		int a,b;
		scanf("%d%d",&a,&b);
		graph[a][b] = 1;
		graph[b][a] = 1;
	}
	
	printf("Enter Start node : ");
	scanf("%d",&start);
	
	//visited array
	bool visited[nodes];
	for(int i = 0; i<nodes; i++){
		visited[i] = false;
	}
	
//	for(int i = 0; i<nodes; i++){
//		for(int j = 0; j<nodes; j++){
//			printf("%d ",graph[i][j]);
//		}
//		printf("\n");
//	}
	dfs(start,visited,nodes);
	
	return 0;
	
}
