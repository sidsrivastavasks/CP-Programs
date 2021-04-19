#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int j,b;
    int sort=1;
    for (i=0; i<n-1;++i)
    {    
        for (j=i+1;j<n;++j)
        {
            if (a[i]>a[j])
            {    b=a[i];
                a[i]=a[j];
                a[j]=b;
                sort++;
            }
        }
    }
    printf("%d",sort);
    return 0;
}

