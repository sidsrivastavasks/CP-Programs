#include<stdio.h>

int main(){
	int n,m,t,i,j;
	scanf("%d%d%d",&n,&m,&t);
	
	int a[n][m],b[n][m],c[n][m];
	
	for(i = 0; i<n; i++){
		for(j = 0; j<m; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i = 0; i<n; i++){
		for(j = 0; j<m; j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i = 0; i<n; i++){
		for(j = 0; j<m; j++){
			scanf("%d",&c[i][j]);
		}
	}
	
	int ansA[n-1][m],ansB[n-1][m],ansC[n-1][m];
	
	for(i = 0; i<n-1; i++){
		for(j = 0; j<m; j++){
			
			ansA[i][j] = a[i][j]+a[i+1][j];
			ansB[i][j] = b[i][j]+b[i+1][j];
			ansC[i][j] = c[i][j]+c[i+1][j];
		}
	}
	printf("\n");
	
	for(i = 0; i<n-1; i++){
		for(j = 0; j<m; j++){
			printf("%d ",ansA[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i = 0; i<n-1; i++){
		for(j = 0; j<m; j++){
			printf("%d ",ansB[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i = 0; i<n-1; i++){
		for(j = 0; j<m; j++){
			printf("%d ",ansC[i][j]);		
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
