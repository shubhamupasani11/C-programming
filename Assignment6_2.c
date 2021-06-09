/*2.Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
Input : 9000
Output : It Contains Zero
Input : 10687
Output : It Contains Zero
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int no)
{
	int icnt=0;
	int digit=0;
	while(no>0)
	{
		digit=(no%10);
		if(digit==0)
		{
			icnt++;
		if(icnt!=0)
		{
			return 1;
		}
		}
		else
		{
			return 0;
		}
		no=no/10;
	}
		
	
}
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	printf("Enter number\n");
	scanf("%d",&iValue);
	bRet = ChkZero(iValue);
	if(bRet ==1)
	{
		printf("It Contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}
	return 0;
}