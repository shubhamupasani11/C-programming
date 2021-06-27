/*3. Write a program which returns addition of all element from singly linear
linked list.
Function Prototype :
int Addition( PNODE Head);
Input linked list : |10|->|20|->|30|->|40|
Output : 100
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
int Addition(PNODE head)
{
	int sum=0;
	while(head!=NULL)
	{
		sum=sum+head->Data;
		head=head->next;
	}
	return sum;
}
int main()
{
	int iret=0,icnt=0;
	int size=0;
	PNODE first=NULL;
	Insert(&first,10);
	Insert(&first,20);
	Insert(&first,30);
	Insert(&first,40);
	iret=Addition(first);
	printf("Addition is:%d\n",iret);
	return 0;
}