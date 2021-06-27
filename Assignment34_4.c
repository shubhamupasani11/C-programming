/*4. Write a program which return second maximum element from singly linear
linked list.
Function Prototype :
int SecMaximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 240
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
int SecMaximum(PNODE head)
{
	int Max2=head->Data;
	int Max=head->Data;
	while(head!=0)
	{
		if(Max>head->Data)
		{
			Max=head->Data;
		}
		if((Max2<Max)&&(Max2<head->Data))
		{
			Max2=head->Data;
		}
		head=head->next;
	}
	return Max2;
}
	

int main()
{
	int iret=0;
	PNODE first=NULL;
	Insert(&first,110);
	Insert(&first,230);
	Insert(&first,320);
	Insert(&first,240);
	iret=SecMaximum(first);
	printf("Second Maximum numbers is:%d\n",iret);
	return 0;
}