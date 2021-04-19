#include<stdio.h>

void merge(int left[], int right[], int arr[]){
	
	int i=0,j=0, k=0;
	int lsize = sizeof(left)/sizeof(left[0]);
	int rsize = sizeof(right)/sizeof(right[0]);
	
	while(i<lsize  && j<rsize){
		if(left[i]<=right[j]){
			arr[k] = left[i];
			i++;
		}
		else{
			arr[k] = right[j];
			j++;
		}
		k++;
	}
	
	while(i<lsize){
		arr[k] = left[i];
		i++;k++;
	}
	
	while(j<rsize){
		arr[k] = right[j];
		j++;k++;
	}
	
	for(int i = 0; i<lsize+rsize; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void mergeSort(int a[]){

	int size = sizeof(a)/sizeof(a[0]);
	
	printf("%d ",size);
	if(size<2)
		return;
	
	int mid = size/2;
	int left[mid];
	int right[size-mid];
	
	for(int i = 0; i<mid; i++){
		left[i] = a[i];
	}
	
	int j = 0;
	for(int i = mid; i<size; i++){
		right[j] = a[i];
		j++;
	}
	
		
	mergeSort(left);
	mergeSort(right);
	merge(left, right, a);
}

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	mergeSort(arr);
	for(int i = 0; i<n; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
