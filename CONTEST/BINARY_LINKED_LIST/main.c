#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head = NULL;
int main()
{
    int choice;
    while(1)
    {
        printf("PRESS 1 TO INSERT ELEMENT IN THE LIST\n");
        printf("PRESS 2 TO INSERT AT ANY POSITION\n");
        printf("PRESS 3 TO DELETE FROM ANY POSITION\n");
        printf("PRESS 4 TO SEARCH DATA IN THE LIST\n");
        printf("PRESS 5 TO SORT ELEMENT IN THE LIST\n");
        printf("PRESS 6 TO DISPLAY\n");
        printf("PRESS 7 TO EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();break;
            case 2: insert_at_any();break;
            case 3: del(); break;
            case 4: search(); break;
            case 5: sort(); break;
            case 6: display();break;
            case 7: sort(); break;
            default : printf("INVALID CHOICE\n");
        }
    }
    return 0;
}

void insert()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA\n");
    scanf("%d",&temp->data);
    temp->next = NULL;
    if(head==NULL)
    {
        head = temp;
    }
    else
    {
        struct node* p;
        p = head;
        while(p!=NULL)
        {
            p=p->next;
        }
        p = temp;
    }
}
void insert_at_any()
{
    struct node* temp;

    if(head==NULL && pos>1)
    {
        printf("")
    }
}




