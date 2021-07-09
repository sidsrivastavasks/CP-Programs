#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int adj[100][100] = {0};
int color[100];


bool checkDFS(int nodes, int num){


    for(int i = 1; i<=nodes; i++){
        if(adj[num][i]==1 && color[i]==-1){
            color[i] = 1-color[num];
            if(!checkDFS(nodes,i)){
                return false;
            }
        }
        else if(adj[num][i]==1 && color[num]==color[i]){
            return false;
        }
    }

    return true;

}

bool isBipertite(int nodes){

    for(int i = 1; i<=nodes; i++){
        color[i] = -1;
    }

    for(int i = 1; i<=nodes; i++){
        if(color[i]==-1){
            color[i]=1;
            if(!checkDFS(nodes,i)){
                return false;
            }
        }
    }

    return true;

}

int main()
{

/**
1 2
2 3
2 7
3 4
7 6
4 5
6 5
5 8
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
    else if(isBipertite(n)){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
