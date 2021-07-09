#include<stdio.h>
#include<stdlib.h>

struct data{
	
	int serial;
	int roll;
	char name[100];
	char id[6];
	char course[100];
	
};


int main(){
	
	
	int total;
	scanf("%d",&total);
	struct data students[total];
	int i = 0;
	for(i = 0; i<total; i++){
		char pp;
		scanf("%d",&students[i].serial);
		scanf("%d",&students[i].roll);
		scanf("%[^,]s",students[i].name);
		scanf("%c",&pp);	
		scanf("%[^,]s",students[i].id);
		scanf("%c",&pp);
		scanf("%[^\n]s",students[i].course);
		
	}
	
	//printf("%s",students[0].course);
	
	for(int i = 0; i<total; i++){
		if(students[i].id=="HS424"){
			printf("%d %s",students[i].roll,students[i].name);
		}
	}
	
}
