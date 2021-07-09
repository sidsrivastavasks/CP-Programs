#include<stdio.h>

struct data{
	
	int serial;
	int roll;
	char name[100];
	char id[6];
	char course[100];
	
};

struct output{
	int roll;
	char name[100];
};

int strcmp (char str1[], char str2[]){
	
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0'){
        if (str1[i] != str2[i])
            return 1;
        i++;
    }
    if (str1[i] == '\0' && str2[i] != '\0' || str2[i] == '\0' && str1[i] != '\0'){
        return 1;
    }
    return 0;

}
void strcpy (char str1[], char str2[]){

    int i = 0;
    char x = str1[i];

    while (x != '\0'){
        str2[i] = x;
        i++;
        x = str1[i];
    }
    str2[i] = '\0';
}


int main(){
	
	
	int total;
	scanf("%d",&total);
	struct data students[total];
	int i = 0;
	for(i = 0; i<total; i++){
		char pp;
		scanf("%d",&students[i].serial);
		scanf("%d ",&students[i].roll);
		scanf("%[^,]s",students[i].name);
		scanf("%c",&pp);	
		scanf("%[^,]s",students[i].id);
		scanf("%c",&pp);
		scanf("%[^\n]s",students[i].course);		
	}
	
	
	struct output ans[total];
	int cnt = 0,ptr = 0;
	for(i = 0; i<total; i++){
		int res = strcmp(students[i].id,"HS424");
		//printf("%d ",res);
		if(res==0){
			ans[ptr].roll = students[i].roll;
			strcpy(students[i].name,ans[ptr].name);
			ptr++;
			cnt++;
		}
	}
		
	printf("%d\n",cnt);
	for(i = 0; i<cnt; i++){
		printf("%d %s\n",ans[i].roll,ans[i].name);
	}
	
}
