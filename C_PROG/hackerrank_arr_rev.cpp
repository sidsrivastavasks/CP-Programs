#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int arr[n];
    printf("ENTER THE SIZE OF AN ARRAY : ");
    scanf("%d\n",&n);
    for(i=0; i<n; i++)
    {
    	printf("ENTER ARRAY[%d] : ", i);
        scanf("%d",&arr[i]);
    }
    for(i=n-1; i>=0; i--)
    {
    	printf("\nREVERSED ARRAY ELEMENT ARE : %d ", arr[i]);
	}
    

    return 0;
}

