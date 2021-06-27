/*2. Write a program which display all palindrome elements of singly linked
list.
Function Prototype :
void DisplayPallindrome( PNODE Head);
Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
Output : 11 6 414
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
void Palindrome(PNODE head)
{
	while(head!=NULL)
	{
		int digit=0,rev=0,temp=0;
		temp=head->Data;
		while(head->Data>0)
		{
			digit=head->Data%10;
			rev=(rev*10)+digit;
			head->Data=head->Data/10;
		}
		if(rev==temp)
		{
			printf("%d\t",rev);
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
	Insert(&first,414);
	Insert(&first,6);
	Insert(&first,89);
	Palindrome(first);
	return 0;
}