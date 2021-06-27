/*3. Accept number from user and display below pattern.
Input : 5
Output : 1 * 2 * 3 * 4 * 5 *
Program Layout :
*/
#include<stdio.h>
void Pattern(int no)
{
	int icnt=0;
	for(icnt=1;icnt<=no;icnt++)
	{
		printf("%d\t *\t",icnt);
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