/*5. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 
1 2 3 4
1 * * 4
1 * * 4
1 2 3 4
Program Layout :
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	int i,j=0;
	int icnt=0;
	printf("\n");
	for(i=1;i<=iRow;i++)
	{
		icnt=1;
		for(j=1;j<=iCol;j++)
		{
			
			if(((i==1)||(i==iRow)) ||((j==1)||(j==iCol)))
			{
				printf("%d\t",icnt);
				icnt++;
			}
				
			else
			{
				printf("*\t");
				icnt++;
			}
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