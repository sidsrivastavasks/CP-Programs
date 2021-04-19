#include <stdio.h>

int main()
{
    int num, count=0;

    printf("Enter any number: ");
    scanf("%d", &num);

    while(!(num & 1))
    {
        count++;
        num >>= 1;
    }

    printf("Total number of trailing zeros = %d.", count);

    return 0;
}
