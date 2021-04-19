#include<stdio.h>
int main(){
	long long int a,b;
	char x,y,op;
	scanf("%ld %c %c %ld %c",&a,&x,&op,&b,&y);
	double firstTerm,secondTerm;

	switch(x){
		case 't':firstTerm = a*(14.78677);break;
		case 'o':firstTerm = a*(29.57353);break;
		case 'c':firstTerm = a*(236.58824);break;
		case 'p':firstTerm = a*(473.17648);break;
		case 'q':firstTerm = a*(946.35296);break;
		case 'g':firstTerm = a*(3785.4);break;
	}

	switch(y){
		case 't':secondTerm = b*(14.78677);;break;
		case 'o':secondTerm = b*(29.57353);break;
		case 'c':secondTerm = b*(236.58824);break;
		case 'p':secondTerm = b*(473.17648);break;
		case 'q':secondTerm = b*(946.35296);break;
		case 'g':secondTerm = b*(3785.4);break;
	}
	double result;
	switch(op){
		case '+': result = firstTerm + secondTerm;printf("%lf",result);break;
		case '-': result = firstTerm - secondTerm;printf("%lf",result);break;
	}

	return 0;
}
