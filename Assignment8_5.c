/*
Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20
*/
#include<stdio.h>

void MultipleDisplay(int no)
{
	int icnt=0;
	for(icnt=1;icnt<=5;icnt++)
	{
		printf("%d\t",icnt*no);
	}
	
}

int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	MultipleDisplay(iValue);
return 0;
}