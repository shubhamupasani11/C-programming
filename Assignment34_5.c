/*5. Write a program which display addition of digits of element from singly
linear linked list.
Function Prototype :int SumDigit( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10
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
void DigitSum(PNODE head)
{
	int digit=0;
	
	while(head!=NULL)
	{
		int sum=0;
		while((head->Data)>0)
		{
			digit=(head->Data)%10;
			sum=sum+digit;
			head->Data=(head->Data)/10;
			
		}
		printf("%d\t",sum);
		head=head->next;
	}
	
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
	DigitSum(first);
	
	return 0;
}