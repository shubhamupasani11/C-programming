/*1. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 
A B C D
A B C D
A B C D
A B C D
Program Layout :
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	int i=0;
	int j=0;
	
	printf("\n");
	for(i=1;i<=iRow;i++)
	{
		char ch='A';
		for(j=1;j<=iCol;j++)
		{
			printf(" %c\t",ch++);
		}
		printf("\n");
	}
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter number of rows and columns\n");
	scanf("%d %d",&iValue1, &iValue2);
	Pattern(iValue1, iValue2);
	return 0;
}