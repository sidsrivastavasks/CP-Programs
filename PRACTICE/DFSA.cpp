#include <stdio.h>
#include <stdlib.h>

//STACK
typedef struct vertice{
    char name;
    int visited;
}Vertice;

typedef struct Stack {
    int capacity;
    int top;
    char arr[50];
}Stack;

//Stack Functions
Stack createStack (int max){
    Stack stack ;
    stack.capacity = max;
    stack.top = -1;
    return stack;
}
void push( Stack stack, char x ){
    if ( stack.top == stack.capacity )
        printf("\nStack Overflow\n");
    else
        stack.arr[++stack.top] = x;
}
char pop( Stack stack ){
    if (stack.top == -1)
        printf("\nStack Underflow\n");
    else
        return stack.arr[stack.top--];
}
char peek (Stack stack){
    if (stack.top == -1)
        printf("\nStack Underflow\n");
    else
        return stack.arr[stack.top];
}
int isEmpty( Stack stack ){
    return (stack.top + 1);
}
void DFS (int adjMatrix[][50], Vertice Vertices[], int n, int edges){
    createStack(n);
     
};

int main(){
    int n,i,edges,j;
    int x,y;
    int adjMatrix[50][50];
    Vertice lstVertices[50];

    printf("\nEnter No of Vertices : ");
    scanf("%d",&n);
    fflush(stdin);
    printf("\nEnter the %d Vertices\n",n);
    for(i=0; i<n; i++){
    	//printf("Enter : ");
    	fflush(stdin);
        scanf("%c",&lstVertices[i].name);
        
        lstVertices[i].visited=0;
    }
    printf("\nEnter no of Edges : ");
    scanf("%d",&edges);
    for (i=0; i<edges; i++){
        scanf("%d%d",&x,&y);
        adjMatrix[x][y] = 1;
        adjMatrix[y][x] = 1;
    }
    printf("\nThe Vertices");
    for (i=0; i<n; i++){
        printf("\n%c %d",lstVertices[i].name,lstVertices[i].visited);
    }
    
    printf("\nAdjancet Matrix\n");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("%d ",adjMatrix[i][j]);
        }
        printf("\n");
    }
    //DFS (adjMatrix, Vertices, n, edges);//

    return 0;
}
