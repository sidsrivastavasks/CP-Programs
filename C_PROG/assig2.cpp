#include<stdio.h>

typedef unsigned char Mychar;
void find(void);

int main()
{
	Mychar ch = 'a';
	printf("Ch inside main(): %c\n", ch);
	find();
	return 0;
}

void find(void)
{
	Mychar ch='z';
	printf("Ch inside foo(): %c\n", ch);
}
