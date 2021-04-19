#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b, i, j;
     char alp[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    scanf("%d\n%d", &a, &b);
  for(i=a; i<=b; i++)
  {
      j= i<=9? i-1: 9+i%2;
      printf("%s\n", alp[j]);
      
        }

    return 0;
}


