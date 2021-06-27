/*2. Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #
Program Layout :
*/
#include<stdio.h>
void Pattern(int no)
{
	int icnt=0;
	for(icnt=no;icnt>=1;icnt--)
	{
		printf("%d\t #\t",icnt);
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