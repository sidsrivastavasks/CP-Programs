#include <stdio.h>
#include <stdlib.h>
struct ListNode{
int val;
struct ListNode* next
};
struct Listnode* create(struct ListNode* h)
{
    struct ListNode* temp;
    temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    printf("ENTER THE DATA : ");
    scanf("%d",&temp->val);
    temp->next = NULL;
    if(h == NULL)
    {
        h = temp;
    }
    else
    {
        struct ListNode* t = h;
        while(t->next!=NULL)
        {
            t = t->next;
        }
        t->next = temp;
    }
    return h;
}
void display(struct ListNode* h)
{
    while(h!=NULL)
    {
        printf("%d ",h->val);
        h = h->next;
    }
}
void Listadd(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* l3=NULL,*last = NULL;
    int carry = 0;
    while(l1 && l2)
    {
        struct ListNode* temp;
        temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val = (l1->val+l2->val+carry)%10;
        carry = (l1->val+l2->val+carry)/10;
        temp->next = NULL;
        if(l3==NULL)
        {
            l3 = temp;
            last = temp;
        }
        else
        {
            last->next = temp;
            last = last->next;
        }
        l1= l1->next;
        l2= l2->next;
    }
    while(l1 || l2)
    {
        if(l1)
        {
            struct ListNode* temp;
            temp = (struct ListNode*)malloc(sizeof(struct ListNode));
            temp->val = (l1->val+carry)%10;
            carry = (l1->val+carry)/10;
            temp->next = NULL;
            if(l3==NULL)
            {
                l3 = temp;
                last = temp;
            }
            else
            {
                last->next = temp;
                last = last->next;
            }
            l1 = l1->next;
        }
        else
        {
            struct ListNode* temp;
            temp = (struct ListNode*)malloc(sizeof(struct ListNode));
            temp->val = (l2->val+carry)%10;
            carry = (l2->val+carry)/10;
            temp->next = NULL;
            if(l3==NULL)
            {
                l3 = temp;
                last = temp;
            }
            else
            {
                last->next = temp;
                last = last->next;
            }
            l2 = l2->next;
        }
    }
    if(carry!=0)
    {
        struct ListNode* temp;
        temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val = carry;
        temp->next = NULL;
        if(l3==NULL)
        {
            l3 = temp;
            last = temp;
        }
        else
        {
            last->next = temp;
            last = last->next;
        }
    }
    display(l3);
}
int main()
{
    struct ListNode* l1=NULL,*l2 = NULL;
    int n,i;
    printf("ENTER SIZE OF LIST : ");
    scanf("%d",&n);
    printf("FOR LIST 1\n");
    for(i = 0; i<n; i++)
    {
        l1 = create(l1);
    }
    int m;
    printf("FOR LIST 2\n");
    printf("ENTER SIZE OF LIST : ");
    scanf("%d",&m);
    for(i = 0; i<m; i++)
    {
        l2 = create(l2);
    }
    Listadd(l1,l2);

    return 0;
}
