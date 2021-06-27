/*4. Write a program which display smallest digits of all element from singly
linear linked list.
Function Prototype :
void DisplaySmall( PNODE Head);
Input linked list : |11|->|250|->|532|->|415|
Output : 1 0 2 1
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
void SmallDigit(PNODE head)
{
	
	while(head!=NULL)
	{
		int digit=0,min=9;
		while(head->Data>0)
		{
			digit=head->Data%10;
			if(digit<min)
			{
				min=digit;
				if(min==0)
				{
					break;
				}
			}
			head->Data=head->Data/10;
		}
		printf("%d\t",min);
		head=head->next;
	}
}

int main()
{
	PNODE first=NULL;
	Insert(&first,11);
	Insert(&first,250);
	Insert(&first,532);
	Insert(&first,415);
	SmallDigit(first);
	return 0;
}