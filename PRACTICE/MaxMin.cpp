#include<stdio.h>

int main(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter Array Elements : ");
	for(int i = 0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int min = a[0],max = a[0];
	
	for(int i = 0; i<n; i++){
		if(a[i]>max){
			max = a[i];
		}
		if(a[i]<min){
			min = a[i];
		}
	}
	
	printf("Maximum = %d Minimum = %d",max,min);
	return 0;
}
