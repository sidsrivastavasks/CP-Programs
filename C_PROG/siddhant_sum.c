#include <stdio.h>
void sort (int arr[])
{
        int i,j,temp;
        for (i=0;i<5;i++)
        {   for(j=i+1;j<5-i;j++)
            {
                if (arr[i]<arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

}

int main ()
{
    int cases,i,j,k,rayparty,friends,canbeborrowed[6],sum;
    scanf("%d",&cases);
    for(i=1;i<=cases;i++)
    {   sum=0;
        scanf("%d %d",&rayparty,&friends);
        for (j=0;j<friends;j++)
        {
            scanf("%d",&canbeborrowed[j]);
            sum+=canbeborrowed[j];
        }
        if (sum < rayparty)
            printf("Scenario #%d\nImpossible",i);

        else
        {   sum=0;
            sort(canbeborrowed);
            for (k=1;k<=6;k++)
            {
                sum+=canbeborrowed[k-1];
                if (sum>rayparty)
                {
                    printf("Scenario #%d\n%d",i,k);
                    break;
                }

            }

        }

    }
    return 0;
}
