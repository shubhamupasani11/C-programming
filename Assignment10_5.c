/*5. Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16
Program Layout :
*/
#include<stdio.h>
void Pattern(int no)
{
	int icnt=0;
	for(icnt=1;icnt<=no;icnt++)
	{
		printf("%d\t",2*icnt);
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