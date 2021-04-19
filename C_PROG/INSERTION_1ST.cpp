#include<stdio.h>
int main()
{
    int t,n,i,j,hole,value,count;
    scanf("%d",&t);
    count = 0;
    hole = 0;
    value = 0;    
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<=n-1; i++)
    {
        value=a[i];
        hole=i;
        while(hole>0 && a[hole-1]>value)
        {
            a[hole]=a[hole-1];
            hole=hole-1;
            for(j=0; j<n; j++)
            {
                printf("%d ",a[j]);
            }
        }
        a[hole]=value;
    }
    return 0;
}
