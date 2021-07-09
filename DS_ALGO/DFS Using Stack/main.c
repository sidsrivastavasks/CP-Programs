#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int top = -1;
int stack[100];
bool visited[100];
int graph[100][100];

bool isEmpty(){
    return (top==-1? true : false);
}

void push(int data){
    if(top>=99){
        printf("Stack Overflow");
        return ;
    }

    top++;
    stack[top] = data;
}

int peek(){
    return (top!= -1? stack[top] : -1);
}

void pop(){
    if(top==-1){
        printf("Stack Underflow");
        return ;
    }
    top--;
}

void dfs(){



}

int main()
{

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

	//function call
	dfs(nodes);
    return 0;
}
