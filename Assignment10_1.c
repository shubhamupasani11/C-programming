/*1. Accept number from user and display below pattern.
Input : 5
Output : A B C D E
Program Layout :
*/
#include<stdio.h>
void Pattern(int iNo)
{
	int icnt=0;
	char ch='A';
	for(icnt=1;icnt<=iNo;icnt++)
	{
		printf("%c\t",ch++);
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number of elements\n");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}