#include <stdio.h>
#include<string.h>
int main(int arrc, char *arrv[]) {
	int i,Count = 0;
	int l = strlen(arrv);
	for(i = 0 ; arrv[i]!='\0'; i++)
	{
		if(arrv[i] == 'a' || arrv[i] == 'e' || arrv[i] == 'i' || arrv[i] == 'o' || arrv[i] == 'u') {  
            Count++;  
        }  
	}
	printf("%d",Count);
	return 0;
}
