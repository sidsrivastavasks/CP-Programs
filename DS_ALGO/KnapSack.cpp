#include<stdio.h>


struct data{
	int value;
	int weight;
	float ratio;
};

void swap(struct data *a, struct data *b)
{
    struct data temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct data arr[], int n)
{
    for (int i = 0; i < n-1; i++){    
    	for (int j = 0; j < n-i-1; j++){
        	if (arr[j].ratio < arr[j+1].ratio){
            	swap(&arr[j], &arr[j+1]);
        	}
    	}
	}
}


int main(){
	
	int w,n;
	printf("Enter the Capacity : ");
	scanf("%d",&w);
	
	printf("Enter the size of Array : ");
	scanf("%d",&n);
	
	struct data arr[n];
	
	printf("Enter %d Values and Weight\n",n);
	for(int i = 0; i<n; i++){
		scanf("%d%d",&arr[i].weight,&arr[i].value);
		arr[i].ratio = ((float)arr[i].value/(float)arr[i].weight);
	}
	
	bubbleSort(arr,n);
	
//	for(int i = 0; i<n; i++){
//		printf("%d %d %f\n",arr[i].weight,arr[i].value,arr[i].ratio);
//	}
	
	int maxWgt = 0, maxAmt = 0,leftOver = 0;
	int complete[n],partial[n];
	int p = 0,q = 0;
	
	for(int i = 0; i<n; i++){
		if(maxWgt+arr[i].weight<=w){
			maxAmt+=arr[i].value;
			maxWgt+=arr[i].weight;
			complete[p] = arr[i].weight;
			p++;
		}
		else{
			
			leftOver = w-maxWgt;
			float part = (float)leftOver/(float)arr[i].weight;
			maxAmt += arr[i].value*part;
			partial[q] = leftOver;
			q++;
			break;
		}
	}
	
	printf("Complete Weight taken are : ");
	for(int i = 0; i<p; i++){
		printf("%d ",complete[i]);
	}
	
	printf("\nPartial Weight taken are : ");
	for(int i = 0; i<q; i++){
		printf("%d ",partial[i]);
	}
	
	printf("\nMax Amount : %d ",maxAmt);
	
	return 0;
}
