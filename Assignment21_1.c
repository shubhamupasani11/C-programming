/*1. Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckAlpha(char ch)
{
	if ((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z'))
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
	char ch='\0';
	int bret=0;
	printf("enter the charcter to check\n");
	scanf(" %c",&ch);
	bret=CheckAlpha(ch);
	if (bret==1)
	{
		printf("It is an aphabet\n");
	}
	else
	{
		printf("It is not aphabet\n");
	}
		
	return 0;			
}