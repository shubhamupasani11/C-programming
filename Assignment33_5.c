/*5. Write a program which return smallest element from singly linear linked
list.
Function Prototype :
int Minimum( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 20
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
int Minimum(PNODE head)
{
	int Min=head->Data;
	while(head!=NULL)
	{
		if(head->Data < Min)
		{
			Min=head->Data;
		}
		head=head->next;
	}
	return Min;
}
int main()
{
	int iret=0;
	PNODE first=NULL;
	Insert(&first,110);
	Insert(&first,230);
	Insert(&first,20);
	Insert(&first,240);
	Insert(&first,640);
	iret=Minimum(first);
	printf("Minimum Number is:%d\n",iret);
	return 0;
}