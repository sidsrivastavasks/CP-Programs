#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int adj[100][100] = {0};
bool visited[100] = {false};

bool dfs(int nodes, int curr, int prev){

    visited[curr] = true;
    for(int i = 1; i<=nodes; i++){
        if(adj[curr][i]==1 && !visited[i]){
            if(dfs(nodes,i,curr))
                return true;
        }
        else if(adj[curr][i]==1 && visited[i]){
            if(prev!=i)
                return true;

        }
    }

    return false;

}

bool isCycle(int nodes){

    for(int i = 1; i<=nodes; i++){
        if(!visited[i]){
            if(dfs(nodes,i,-1)){
                return true;
            }
        }
    }
    return false;

}

int main()
{
/**
1 3
3 4
2 5
5 6
6 7
7 8
8 5
**/
    int n;
	printf("Enter the Number of Nodes : ");
	scanf("%d",&n);

	int edges;
	printf("Enter Number of Edges : ");
	scanf("%d",&edges);

	for(int i = 1; i<=edges; i++){
        int a,b;
        scanf("%d%d",&a,&b);
        adj[a][b] = 1;
        adj[b][a] = 1;
	}



    printf("The Given Graph is Tree? Yes or No : ");
    if(n==0){
        printf("NO");
    }
    else if(!isCycle(n)){
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}
