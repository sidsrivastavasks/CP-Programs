#include<stdio.h>

enum suit{
	club=0,
	diamond=10,
	hearts=20,
	spades=3
}cards;

int main()
{
	cards=club;
	printf("%d",sizeof(cards));
	return 0;
}
