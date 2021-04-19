#include<stdio.h>
int main(){
	int n,m;
	printf("Enter the Number of Rows and Colums : ");
	scanf("%d%d",&n,&m);
	float arr[n][m];
	float res[n*m][3];
	int k = 0;
	printf("Enter the value\n");
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			scanf("%f",&arr[i][j]);
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(arr[i][j]>0){
				res[k][0] = i;
				res[k][1] = j;
				res[k][2] = arr[i][j];
				k++;
			}
		}
	}
	printf("Values are present at the\n");
	for(int i = 0; i<k; i++){
		for(int j = 0; j<3; j++){
			if(j<=1)
				printf("%d ",res[i][j]);
			else
				printf("%f ",res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
