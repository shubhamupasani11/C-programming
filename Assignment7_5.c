/*5.Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits.
Input : 2395
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)
*/
#include<stdio.h>
int CountDiff(int no)
{
	int sum1=0;
	int sum2=0;
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
			sum1=sum1+digit;
		}
		if((digit%2)!=0)
		{
			sum2=sum2+digit;
		}
		no=no/10;
	}
	return sum1-sum2;	
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet = CountDiff(iValue);
	printf("%d",iRet);
	return 0;
}