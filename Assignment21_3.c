/*3. Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckD(int no)
{
	if (no<0)
	{
		no=-no;
	}
	if((no>=0)&&(no<=9))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int main()
{
	int value,iret=0;
	printf("Enter the digit to check\n");
	scanf("%d",&value);
	iret=CheckD(value);
	if(iret==1)
	{
		printf("yes,its a digit\n");
	}
	else
	{
		printf("No,its not a digit\n");
	}
	return 0;
}