#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void print_matrix(int arr[100][100],int n,int m);


int main(){
    int n ,m, k=0 ;
    int i,j;
    int arr[100][100];

    printf("\nEnter number of rows and columns : ");
    scanf ("%d%d",&n,&m);
    int matrix[n][m];

    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            matrix[i][j] = 0;
        }
    }
    
    srand(time(0));
    for(i=0;i<n;i++){
        int a = rand()%n, b = rand()%m, c =rand()%100;
        printf("%d %d %d %d\n",i,a,b,c);
        matrix[a][b] = c;
        print_matrix(matrix,n,m);

    }


//    for (i=0;i<n;i++){
//        for(j=0;j<m;j++){
//            if (matrix[i][j] != 0){
//                arr[k][0]=i;
//                arr[k][1]=j;
//                arr[k][2]=matrix[i][j];
//               }
//               k++;
//            }
//        }
//    printf("\n");
//    print_matrix(arr,k,3);
    return 0;
}


void print_matrix(int matrix[100][100],int n,int m){
    int i,j;
    if (n == 0){
        printf("\nMatrix empty");
        return;
    }
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
