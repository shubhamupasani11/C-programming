/*5. Write a program which display largest digits of all element from singly
linear linked list.
Function Prototype :
void DisplayLarge( PNODE Head);
Input linked list : |11|->|250|->|532|->|419|
Output : 1 5 5 9
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
void LargeDigit(PNODE head)
{
	
	while(head!=NULL)
	{
		int digit=0,max=0;
		while(head->Data>0)
		{
			digit=head->Data%10;
			if(digit>max)
			{
				max=digit;
				
			}
			head->Data=head->Data/10;
		}
		printf("%d\t",max);
		head=head->next;
	}
}

int main()
{
	PNODE first=NULL;
	Insert(&first,11);
	Insert(&first,250);
	Insert(&first,532);
	Insert(&first,419);
	LargeDigit(first);
	return 0;
}