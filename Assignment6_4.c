/*4.Write a program which accept number from user and count frequency of 4 in it.
Input : 2395
Output : 0
Input : 1018
Output : 0
Input : 9440
Output : 2
Input : 922432
Output : 1
*/
#include<stdio.h>
int CountFour(int no)
{
	int icnt=0;
	int digit=0;
	while(no>0)
	{
		digit=(no%10);
		if(digit==4)
		{
			icnt++;
		}
		no=no/10;
	}
	return icnt;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet = CountFour(iValue);
	printf("%d",iRet);
	return 0;
}