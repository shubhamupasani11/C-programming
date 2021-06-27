//Input : 5
//Output : 1 2 3 4 5

#include<stdio.h>
void Display(int no)
{
	static int i=1;
	if(i<=no)
	{
		printf("%d\t",i);
		i++;
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