/*2. Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckCap(char ch)
{
	
	if ((ch>='A')&&(ch<='Z'))
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
	bret=CheckCap(ch);
	if (bret==1)
	{
		printf("It is capital letter\n");
	}
	else
	{
		printf("It is not capital letter\n");
	}
		
	return 0;			
}