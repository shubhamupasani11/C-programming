/*5. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 4
Output :
1   2   3   4
5   6   7   8
9  10  11  12
Program Layout :
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	int i=0;
	int j=0;
	int icnt=1;
	printf("\n");
	for(i=1;i<=iRow;i++)
	{
		
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",icnt);
			icnt++;
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