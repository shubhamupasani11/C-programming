/*3. Write a program which accept number from user and print its numbers line.
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4
*/
#include<stdio.h>
void Display(int no)
{
	int icnt=0;
	for(icnt=-no;icnt<=no;icnt++)
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