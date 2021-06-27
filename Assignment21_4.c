/*4. Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL SmallCase(char ch)
{
	
	if ((ch>='a')&&(ch<='z'))
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
	bret=SmallCase(ch);
	if (bret==1)
	{
		printf("It is small case charcter\n");
	}
	else
	{
		printf("It is not small case letter\n");
	}
		
	return 0;			
}