#include<stdio.h>

int main()
{
    int i,N;
    int arrA[N], arrB[N], arr[N];

     scanf("%d",&N);

     for(i=0; i<N; i++)
     {
        scanf("%d", &arrA[i]);
     }
     for(i=0; i<=N; i++)
     {
         scanf("%d", &arrB[i]);
     }
     for(i=0; i<N; i++)
     {
         arr[i]= arrA[i] + arrB[i];
     }
     for(i=0; i<=N; i++)
     {
     printf("%d", arr[i]);
     }
return 0;
}
