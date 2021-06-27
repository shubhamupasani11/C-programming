/*2. Write a program which displays all elements which are prime from singly
linear linked list.
Function Prototype :
int DisplayPrime( PNODE Head);
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11 17 41 89
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
void Prime(PNODE head)
{
	int icnt=0;
	while(head!=NULL)
	{
		for(icnt=2;icnt<=(head->Data/2);icnt++)
		{
			if((head->Data)%icnt==0)
			{
				break;
			}
		}
		if(icnt==(head->Data/2)+1)
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
	Insert(&first,20);
	Insert(&first,17);
	Insert(&first,41);
	Insert(&first,22);
	Insert(&first,89);
	Prime(first);
	
	return 0;
}