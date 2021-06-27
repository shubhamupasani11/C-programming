/*4.Write a program which accept number from user and return multiplication of all
digits.
Input : 2395
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864
*/
#include<stdio.h>
int MultDigits(int no)
{
	int mult=1;
	int digit=0;
	
	while(no>0)
	{
		
		digit=no%10;
		if(digit==0)
		{
			digit=1+digit;
		}
		mult=mult*digit;
		no=no/10;
	}
	return mult;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet = MultDigits(iValue);
	printf("%d",iRet);
	return 0;
}