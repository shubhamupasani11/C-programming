/*1. Write a program which reverse each element of singly linked list.
Function Prototype :
void Reverse( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : |11|->|82|->|71|->|14|->|6|->|98|
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int Data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;
void Insert(PPNODE head,int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->Data=no;
	newn->next=NULL;
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}
void Reverse(PNODE head)
{
	while(head!=NULL)
	{
		int rev=0,digit=0;
		while(head->Data>0)
		{
			digit=head->Data%10;
			rev=(rev*10)+digit;
			head->Data=head->Data/10;
		}
		printf("%d\t",rev);
		head=head->next;
	}
}
int main()
{
	PNODE first=NULL;
	Insert(&first,11);
	Insert(&first,28);
	Insert(&first,17);
	Insert(&first,41);
	Insert(&first,6);
	Insert(&first,89);
	Reverse(first);
	return 0;
}