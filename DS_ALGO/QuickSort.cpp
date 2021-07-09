#include<stdio.h>


int partition(int a[], int low, int high){
	
	
	int pivot = a[low];
	int i = low;
	while(low<high){
		while(a[low]<=pivot){
			low++;
		}
		while(a[high]>pivot){
			high--;
		}
		if(low<high){
			int temp = a[low];
			a[low] = a[high];
			a[high] = temp;	
		}
	}
	int temp = a[i];
	a[i] = a[high];
	a[high] = temp;	
	return high;
	
}

void quickSort(int a[], int low, int high){
	if (low < high)
    {
        int pivot = partition(a, low, high);
        quickSort(a, low, pivot-1);
        quickSort(a, pivot + 1, high);
    }
}

int main(){
	
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements : ");
	for(int i= 0; i<n; i++){
		scanf("%d",&a[i]);
	}

	quickSort(a,0,n-1);
	for(int i = 0; i<n; i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
