/*2.Write a program which accept number from user and return the count of odd
digits.
Input : 2395
Output : 3
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 0
*/
#include<stdio.h>
int CountOdd(int no)
{
	int icnt=0;
	int digit=0;
	if(no<0)
	{
		no=-no;
	}
	while(no>0)
	{
		digit=no%10;
		if((digit%2)!=0)
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
	iRet = CountOdd(iValue);
	printf("%d",iRet);
	return 0;
}