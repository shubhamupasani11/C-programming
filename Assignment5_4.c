/*4.Write a program which accept number from user and return summation of all its
non factors.
Input : 12
Output : 50
Input : 10
Output : 37
*/
#include<stdio.h>
int SumNonFact(int no)
{
	int icnt=0;
	int sum=0;
	for(icnt=1;icnt<=no;icnt++)
	{
		if((no%icnt)!=0)
		{
			sum=sum+icnt;
		}
	}
	return sum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet = SumNonFact(iValue);
	printf("summation of non factors of given number is:%d",iRet);
	return 0;
}