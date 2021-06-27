/*4. Write a program which return largest element from singly linear linked
list.
Function Prototype :
int Maximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240
output=320
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
int Maximum(PNODE head)
{
	int Max=head->Data;
	while(head!=NULL)
	{
		if(head->Data > Max)
		{
			Max=head->Data;
		}
		head=head->next;
	}
	return Max;
}
int main()
{
	int iret=0;
	PNODE first=NULL;
	Insert(&first,110);
	Insert(&first,230);
	Insert(&first,320);
	Insert(&first,240);
	iret=Maximum(first);
	printf("Maximum Number is:%d\n",iret);
	return 0;
}