#include<stdio.h>
struct Pair{
	int min,max;
};


struct Pair getMinMaxNum(int arr[], int low, int high){
	struct Pair minmax, mml, mmr;    
    int mid;
	
	if (low==high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];     
        return minmax;
    }
     
    else if (high==low+1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }
    
    mid = low + (high-low)/2;
    mml = getMinMaxNum(arr,low,mid);
    mmr = getMinMaxNum(arr,mid+1,high);
     
     
    minmax.min = mml.min < mmr.min ? mml.min : mmr.min;
    minmax.max = mml.max > mmr.max ? mml.max : mmr.max;
     
return minmax;	
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
	
	struct Pair minmax = getMinMaxNum(a,0,n-1);
	
	printf("\nMinimum Element : %d \nMaximum Element : %d",minmax.min,minmax.max);
	
	return 0;
}
