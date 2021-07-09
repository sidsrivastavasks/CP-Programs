#include <stdio.h>
#include <stdlib.h>
struct BstNode{
    int data;
    struct BstNode*right,*left;
};
struct BstNode* insert(struct BstNode* root,int data)
{
    if(root==NULL)
    {
        struct BstNode* temp = (struct BstNode*)malloc(sizeof(struct BstNode));
        temp->data  = data;
        temp->right = NULL;
        temp->left  = NULL;
        root = temp;
    }
    else if(data<=root->data)
    {
        root->left = insert(root->left,data);
    }
    else
    {
        root->right = insert(root->right,data);
    }
    return root;
}
int search(struct BstNode*root,int flag,int data)
{
    if(root==NULL)
    {
        return flag;
    }
    if(root->data==data)
    {
        flag = 1;
        return flag;
    }
    else if(data<=root->data)
    {
        flag = search(root->left,flag,data);
    }
    else
    {
        flag = search(root->right,flag,data);
    }
    return flag;
}
void findmin(struct BstNode* root)
{
	struct BstNode* temp = root;
	if(root==NULL)
	{
		printf("OOPS!! THE TREE IS EMPTY\n");
		return ;
	}
	else 
	{
		while(temp->left!=NULL)
		{
			temp = temp->left;
		}
		printf("\n%d IS MINIMUM DATA IN THE TREE\n",temp->data);
		return ;
	}
}
void findmax(struct BstNode* root)
{
	struct BstNode* temp = root;
	if(root==NULL)
	{
		printf("OOPS!! THE TREE IS EMPTY\n");
		return ;
	}
	else 
	{
		while(temp->right!=NULL)
		{
			temp = temp->right;
		}
		printf("\n%d IS MAXIMUM DATA IN THE TREE\n",temp->data);
		return ;
	}
}
int findheight(struct BstNode* root)
{
	if(root==NULL)
	{
		return -1;
	}
	return ((findheight(root->left)>findheight(root->right))? findheight(root->left):findheight(root->right))+1;
}
int main()
{
    struct BstNode* Root = NULL;
    int ch;
    while(1)
    {
        int data;
        printf("\n=======================\n");
        printf("PRESS 1 TO INSERT\n");
        printf("PRESS 2 TO SEARCH\n");
        printf("PRESS 3 TO FIND MINIMUM ELEMENT\n");
        printf("PRESS 4 TO FIND MAXIMUM ELEMENT\n");
        printf("PRESS 5 TO GET THE HIGHT\n");	
        printf("PRESS 0 TO EXIT\n");
        printf("=======================\n\n");
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter the data : ");
                    scanf("%d",&data);
                    Root = insert(Root,data);break;
            case 2: printf("Enter the data To Search: ");
                    scanf("%d",&data);int flag = 0;
                    flag = search(Root,flag,data);
                    if(flag==1)
                    {
                        printf("\n------------\n");
                        printf("DATA FOUND\n");
                        printf("------------\n");
                    }
                    else
                    {
                        printf("\n------------\n");
                        printf("OOPS! DATA NOT FOUND\n");
                        printf("------------\n");
                    }break;
        	case 3: findmin(Root);break;
        	case 4: findmax(Root);break;
        	case 5:	printf("HEIGHT OF THE ROOT IS : %d\n",findheight(Root));
					break;
            case 0:exit(0);
            default:
                printf("INVALID INPUT\n");
        }
    }
    return 0;
}
