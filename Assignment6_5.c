/*5.Write a program which accept number from user and count frequency of such a
digits which are less than 6.
Input : 2395
Output : 3
Input : 1018
Output : 3
Input : 9440
Output : 3
Input : 96672
Output : 1
*/
#include<stdio.h>
int Count(int no)
{
	int icnt=0;
	int digit=0;
	while(no>0)
	{
		digit=(no%10);
		if(digit<6)
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
	iRet = Count(iValue);
	printf("%d",iRet);
	return 0;
}