#include<stdio.h>
int queue[100];
int front = -1,rare = -1;
int alpha = 0;

void enqueue(int x){

	if(rare>=99){
		printf("Stack OverFlow\n");
		return ;
	}

	if(front==rare &&  front==-1){
		front++;
		rare++;
	}
	else{
		rare++;
	}

	queue[rare] = x;

}

int dqueue(){

	int ans;
	if(front==-1){
		printf("Stack Underflow");
		return -1;
	}

	if(front==rare){
		ans = queue[front];
		front = -1;
		rare  = -1;
	}
	else{
		ans = queue[front];
		front++;
	}
	return ans;
}

bool isEmpty(){

	return (front==-1? 1 : 0);
}

void print(int node, int alpha){
    if(alpha){
        printf("%c ",node+'A');
    }
    else{
        printf("%d ",node);
    }
}


void bfs(int n, int adj[][100],int start){

	enqueue(start); //start node
	int visited[n];

	for(int i = 0; i<n; i++){
		visited[i] = 0;
	}

	visited[start] = 1;

	while(!isEmpty()){
		int node = dqueue();
		print(node,alpha);
		for(int i = 0; i<n; i++){
			if(!visited[i] && adj[node][i]==1){
				enqueue(i);
				visited[i] = 1;
			}

		}
	}

}

int main(){

	int nodes,start,edges;
	char frst;
	printf("Enter the Number of Nodes : ");
	scanf("%d",&nodes);

	printf("Enter the Number of Edges : ");
	scanf("%d",&edges);

	int adj[100][100];

	for(int i = 0; i<nodes; i++){
        for(int j = 0; j<nodes; j++){
            adj[i][j] = 0;
        }
	}

	int ch;
	printf("Enter Input format :\nPress 1 for Int input\nPress 2 for Alphabates\n Enter your Choice : ");
	scanf("%d",&ch);


	switch(ch){
	    case 1: for(int i = 0; i<edges; i++){
                    int a,b;
                    scanf("%d%d",&a,&b);
                    adj[a][b] = 1;
                    adj[b][a] = 1;
                }break;
        case 2: alpha = 1;
                for(int i = 0; i<edges; i++){
                    char a,b;
                    scanf(" %c %c",&a,&b);
                    adj[a-'A'][b-'A'] = 1;
                    adj[b-'A'][a-'A'] = 1;
                }break;

        default : printf("Invalid Choice\n");
	}

	printf("Enter a start Node :");
	if(!alpha){
        scanf("%d",&start);
	}
    else{
        scanf(" %c",&frst);
        start = frst-'A';
    }

	bfs(nodes,adj,start);


/**	1--2--3
	|       \
	|        \
	4--5--6--7--8   **/

}
