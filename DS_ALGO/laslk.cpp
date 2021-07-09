#include<stdio.h>
int a[20][20], visited[20]={0}, stack[20], top= -1;

bool empty(){
	return top!= -1;
}

void DFS(int i, int n)
{
//																			0 1 0 1
//																			1 0 1 0
//																			0 1 0 1
//																			1 0 1 0

	stack[++top]=i; //0
	int j;
	printf("%d ",i);
	visited[i]=1;		//0 = 1,
	
	while(!empty()){
		
		i = stack[top];
		top--;
		
		
		if(!visited[i]){
			printf("%d ",i);
			visited[i] = 1;
		}
		
		
		for(int j = 0; j<n; j++){
			if(a[i][j]==1 && !visited[j]){ 
				stack[++top] = j;
			}
		}
	}
}
int main()
{
	int i,n,j;
	printf("\nEnter the number of vertices: ");
	scanf("%d",&n);
	printf("\nEnter the adjacency matrix for the graph:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0; i<n; i++){
		visited[i] = 0;
	}
	i=0;
	DFS(i,n);
	return 0;
}
