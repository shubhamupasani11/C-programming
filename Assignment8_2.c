/*2.Write a program which accept number from user and print numbers till that
number.
Input : 8
Output : 1 2 3 4 5 6 7 8
*/
#include<stdio.h>

void Display(int no)
{
	int icnt=0;
	if(no<0)
	{
		no=-no;
	}
	for(icnt=1;icnt<=no;icnt++)
	{
		printf("%d\t",icnt);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}