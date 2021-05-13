#include<stdio.h>

void binarySearch(int a[],int low, int high, int key){
	
	if(low>high){
		printf("Oops, Key not Found");
		return ;
	}
	int mid = low + (high-low)/2;
	if(a[mid] == key){
		printf("Key Found at index : %d",mid+1);
		return ;
	}
	else if(a[mid]<key){
		binarySearch(a,mid+1,high,key);
	}
	else{
		binarySearch(a,low,mid-1,key);
	}
	
}

int main(){
	int n;
	printf("Enter the Size of array : ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the Elements : ");
	for(int i = 0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	int key;
	printf("Enter the Key : ");
	scanf("%d",&key);
	
	binarySearch(a,0,n-1,key);
}
