/*3. Write a program which returns addition of all even element from singly
linear linked list.
Function Prototype :
int AdditionEven( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 52
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
int AdditionEven(PNODE head)
{
	int sum=0;
	while(head!=0)
	{
		if((head->Data)%2==0)
		{
			sum=sum+head->Data;
		}
		head=head->next;
	}
	return sum;
}
	

int main()
{
	int iret=0;
	PNODE first=NULL;
	Insert(&first,11);
	Insert(&first,20);
	Insert(&first,32);
	Insert(&first,41);
	iret=AdditionEven(first);
	printf("Addition of even numbers is:%d\n",iret);
	return 0;
}