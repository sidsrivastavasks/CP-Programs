#include<stdio.h>
#include<stdlib.h>

int *additionFnctn(int *arr, int n, int m, int t){
	int *final = (int*)calloc((n-1) * m , sizeof(int));
	int i,j;
	for(i = 0; i<n-1; i++){
		for(j = 0; j<m; j++){
			
			*(final+ i*m + j) = *(arr+ i*m + j) + *(arr+ (i+1)*m + j);
		}
	}
	
	
	return final;
}

int main(){
	int n,m,t,i,j;
	scanf("%d%d%d",&n,&m,&t);

	int *arr = (int*)calloc(n * m , sizeof(int));
	int *brr = (int*)calloc(n * m , sizeof(int));
	int *crr = (int*)calloc(n * m , sizeof(int));
	
	for(i = 0; i<n; i++){
		for(j = 0; j<m; j++){
			int pp;
			scanf("%d",&pp);
			*(arr+ i*m+j) = pp;
		}
	}

//	for(i = 0; i<n; i++){
//		for(j = 0; j<m; j++){
//			int pp;
//			scanf("%d",&pp);
//			*(brr+ i*m+j) = pp;
//		}
//	}
//
//	for(i = 0; i<n; i++){
//		for(j = 0; j<m; j++){
//			int pp;
//			scanf("%d",&pp);
//			*(crr+ i*m+j) = pp;
//		}
//	}
//	
	
	int * ansA = (int *) calloc((n-1)*m,sizeof(int));
	ansA = additionFnctn(arr,n,m,t);
	
	for(i = 0; i<n-1; i++){
		for(j = 0; j<m; j++){
			printf("%d ",*(ansA+ i*m+j));
		}
		printf("\n");
	}
	
	
	int * ansB = (int *) calloc((n-1)*m,sizeof(int));
	ansB = additionFnctn(brr,n,m,t);
	
	for(i = 0; i<n-1; i++){
		for(j = 0; j<m; j++){
			printf("%d ",*(ansB+ i*m+j));
		}
		printf("\n");
	}
	
	
	int * ansC = (int *) calloc((n-1)*m,sizeof(int));
	ansC = additionFnctn(crr,n,m,t);
	
	for(i = 0; i<n-1; i++){
		for(j = 0; j<m; j++){
			printf("%d ",*(ansC+ i*m+j));
		}
		printf("\n");
	}
	
	return 0;
}
