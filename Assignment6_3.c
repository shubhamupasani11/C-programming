/*3.Write a program which accept number from user and count frequency of 2 in it.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 9000
Output : 0
Input : 922432
Output : 3
*/
#include<stdio.h>
int CountTwo(int no)
{
	int digit=0;
	int icnt=0;
	while(no>0)
	{
		digit=(no%10);
		if(digit==2)
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
	iRet = CountTwo(iValue);
	printf("%d",iRet);
	return 0;
}