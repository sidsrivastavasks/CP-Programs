	#include<stdio.h>
#include<stdlib.h>
int k = 3;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* insert(struct node* root, int data){
	struct node* left = NULL, *right = NULL;
	if(root==NULL){
		struct node* temp = NULL;
		temp = (struct node*)malloc(sizeof(struct node));
		temp->data = data;
		temp->left = NULL;
		temp->right = NULL;
		root = temp;
	}
	else if(data<=root->data){
		root->left = insert(root->left,data);
	}
	else{
		root->right = insert(root->right,data);
	}
	return root;
}
void PreOrder(struct node* root){
	if(root==NULL){
		return ;
	}
	printf("%d ",root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}
void InOrder(struct node* root){
	if(root==NULL){
		return ;
	}
	InOrder(root->left);
	printf("%d ",root->data);
	InOrder(root->right);
}
void PostOrder(struct node* root){
	if(root==NULL){
		return ;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ",root->data);
}
void trav(struct node* root){
	struct node* temp = root;
	while(k--){
		temp = temp->left; 
	}
	printf("%d",temp->data);
}
int main(){
	struct node* root = NULL;
	while(1){
		int ch=0,n,i,x,order;
		printf("Press 1 to Insert\n");
		printf("Press 2 to Display\n");
		printf("Press 3 to Exit\n");
		printf("Enter Your Choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:	printf("Enter the Number of data to Insert: ");
				   	scanf("%d",&n);
				   	printf("Enter all %d data: ",n);
				   	for(i = 1; i<=n; i++){
				   		scanf("%d",&x);
				   		root = insert(root,x);
					}
					break;
				   
			case 2:	printf("Press 1 For PreOrder\n");
					printf("Press 2 For InOrder\n");
					printf("Press 3 For PostOrder\n");
					printf("Enter your Choice : ");
					scanf("%d",&order);
					switch(order){
						case 1: PreOrder(root);
								printf("\n");break;
						case 2: InOrder(root);
						printf("\n");break;
						case 3: PostOrder(root);
						printf("\n");break;
					}
					break;
			case 3: trav(root);
					exit(0);
			default: printf("Invalid Input, Please choose a valid key");
		}		
	}
	return 0;
}
