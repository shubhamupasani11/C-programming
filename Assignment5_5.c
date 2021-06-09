/*5.Write a program which accept number from user and return difference between
summation of all its factors and non factors.
Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37)
*/

#include<stdio.h>
int FactDiff(int no)
{
	int icnt=0;
	int sum1=0;
	int sum2=0;
	for(icnt=1;icnt<no;icnt++)
	{
		if((no%icnt)==0) 
		{
			sum1=sum1+icnt;
		}
		if ((no%icnt)!=0) 
		{
			sum2=sum2+icnt;
		}
	}
	return sum1-sum2;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet = FactDiff(iValue);
	printf("summation of factors and non factors of given number is: %d",iRet);
	return 0;
}