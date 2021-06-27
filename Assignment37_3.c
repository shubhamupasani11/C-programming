//3.Write a recursive program which display below pattern.
//Input : 5
//Output : 5 4 3 2 1
#include<stdio.h>
void Display(int no)
{
	
	if(no>0)
	{
		printf("%d\t",no);
		no--;
		Display(no);
	}
}
int main()
{
	int value=0;
	printf("Enter the number\n");
	scanf("%d",&value);
	Display(value);
	return 0;
}