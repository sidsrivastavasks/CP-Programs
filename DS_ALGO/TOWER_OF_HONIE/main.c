#include <stdio.h>
#include <stdlib.h>
void toh(int disk, char src, char dest, char via)
{
    if(disk==1)
    {
       printf("TRANSFER DISK FROM %c TO %c\n",src,dest);
    }
    else
    {
        toh(disk-1, src, via, dest);
        printf("TRANSFER DISK FROM %c TO %c\n",src,dest);
        toh(disk-1,via,dest,src);
    }
}
int main()
{
    char src = 'A', via = 'B', dest = 'C';
    toh(4,src,dest,via);
    return 0;
}
