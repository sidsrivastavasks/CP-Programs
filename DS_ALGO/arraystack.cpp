#include<stdio.h>
#include<stdlib.h>
#define size 100
int top = -1;
int stack[size];

bool isEmpty(){
	if(top==-1){
		return true;
	}
	return false;
}

void push(){
	if(top>size){
		printf("Overflow, Stack is Full\n");
		return ;
	}
	int val;
	printf("Enter the Value to Push : ");
	scanf("%d",&val);
	top++;
	stack[top] = val;
}
void pop(){
	if(top<0){
		printf("Stack Underflow\n");
		return ;
	}
	printf("%d popped\n",stack[top]);
	top--;
}
void display(){
	int i;
	if(isEmpty()){
		printf("Stack is Empty\n");
		return ;
	}
	for(i = 0; i<top; i++){
		printf("%d->",stack[i]);
	}
	printf("%d\n",stack[top]);
}
int main(){
	
	while(1){
		int choice;
		printf("\nPRESS 1 TO PUSH ELEMENT\n");
		printf("PRESS 2 TO POP ELEMENT\n");
		printf("PRESS 3 TO DISPLAY ELEMENTS\n");
		printf("PRESS 4 TO EXIT\n");
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:exit(0);
			default: printf("Oops! Invalid Input\n");
		}	
	}
	return 0;
}
