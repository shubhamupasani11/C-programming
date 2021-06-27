/*1.Write a program which accept number from user and print that number of $ & *
on screen.

Input : 5
Output : $ * $ * $ * $ * $ *

Input : 3
Output : $ * $ * $ *

Input : -3
Output : $ * $ * $ *
*/
#include<stdio.h>

void Pattern(int no)
{
	if(no<0)
	{
		no=-no;
	}
	int icnt=0;
	for(icnt=1;icnt<=no;icnt++)
	{
		printf("$\t *\t");
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);

	Pattern(iValue);

return 0;
}