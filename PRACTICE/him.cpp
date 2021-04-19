#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *ptr;
	//printf("%c",ptr);
	ptr = (char*)malloc(7*sizeof(char));
	scanf("%s",ptr);
	printf("%s ",*ptr);
	printf("%d",strlen(ptr));
	return 0;
}
