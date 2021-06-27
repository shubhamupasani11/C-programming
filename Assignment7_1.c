/*1.Write a program which accept number from user and return the count of even
digits.
Input : 2395
Output : 1
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 4
*/
#include<stdio.h>
int CountEven(int no)
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
		if((digit%2)==0)
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
	printf("Enter number");
	scanf("%d",&iValue);
	iRet = CountEven(iValue);
	printf("%d",iRet);
	return 0;
}