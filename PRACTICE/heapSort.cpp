#include<stdio.h>
void swap(int,int);
void heapify(int[],int,int);
void heapsort(int[],int);
void print(int[],int);
int main()
{
	int a[20],i,n;
	printf("\nEnter total number of max-heap elements: ");
	scanf("%d",&n);
	printf("\nEnter the heap elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	heapsort(a,n);
	printf("\nSorted array: ");
	print(a,n);
	
	return 0;
}
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void heapify(int a[], int n, int i)
{
	int largest=i;
	int l,r;
	l=(2*i)+1;
	r=(2*i)+2;
	if(l<n && a[l]>a[i])
	{
		largest=l;
	}
	if(r<n && a[r]>a[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		swap(&a[i],&a[largest]);
          heapify(a,n,largest);
     }

}
void heapsort(int a[],int n)
{
	int i;
	for(i=n/2-1; i>=0; i--)
	{
		heapify(a,n,i);
	}
	for(i=n-1;i>=0;i--)
	{
		swap(&a[0],&a[i]);
		n--;
		heapify(a,i,0);
	}
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
