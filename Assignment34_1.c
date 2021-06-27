/*1. Write a program which displays all elements which are perfect from singly
linear linked list.
Function Prototype :
int DisplayPerfect( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28
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
typedef struct node ** PPNODE;
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
void Perfect(PNODE head)
{
	while(head!=NULL)
	{
		int sum=0;
		for(int icnt=1;icnt<=head->Data/2;icnt++)
		{
			if((head->Data%icnt)==0)
			sum=sum+icnt;
		}
		if(sum==head->Data)
		{
			printf("%d\t",head->Data);
		}
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
	Insert(&first,06);
	Insert(&first,89);
	Perfect(first);
	
	return 0;
}