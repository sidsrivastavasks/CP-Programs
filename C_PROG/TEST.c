#include<stdio.h>

void largest(int arr[],int n)
{
    int x=0,i;
    for (i=0;i<n;i++)
    {
        if (arr[i]>x)
        {
            x=arr[i];
        }
    }
    printf ("The largest no is : %d",x);

}
int main ()
{
    int n,arr[50],i;
    printf("\nEnter no of elements :");scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest(arr,n);
    return 0;
}
