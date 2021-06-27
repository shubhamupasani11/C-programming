/*3. Write a program which display product of all digits of all element from
singly linear linked list. (Don’t consider 0)
Function Prototype :
void DisplayProduct( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 1 2 6 4
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
void DisplayProduct(PNODE head)
{
	while(head!=NULL)
	{
		int digit=0, mult=1;
		while(head->Data>0)
		{
			digit=head->Data%10;
			if(digit==0)
			{
				digit=1;
			}
			mult=mult*digit;
			head->Data=head->Data/10;
		}
		printf("%d\t",mult);
		head=head->next;
	}
}

int main()
{
	PNODE first=NULL;
	Insert(&first,11);
	Insert(&first,20);
	Insert(&first,32);
	Insert(&first,41);
	DisplayProduct(first);
	return 0;
}