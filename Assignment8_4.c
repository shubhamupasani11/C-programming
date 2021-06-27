/*
4. Write a program which accepts N from user and print all odd numbers up to N.
Input : 18
Output : 1 3 5 7 9 11 13
*/
#include<stdio.h>

void OddDisplay(int no)
{
	int icnt=0;
	if(no<0)
	{
		no=-no;
	}
	for(icnt=1;icnt<no;icnt++)
	{
		if((icnt%2)!=0)
		{
			printf("%d\t",icnt);
		}
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);

	OddDisplay(iValue);

	return 0;
}