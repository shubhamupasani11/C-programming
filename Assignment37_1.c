//1. Write a recursive program which display below pattern.
//Input : 5
//Output : * * * * *
#include<stdio.h>

void DisplayR(int ino)
{
	if(ino>=1)
	{
		printf("*\t");
		ino--;
		DisplayR(ino);
	}
}
int main()
{
	int value=0;
	printf("Enter the number\n");
	scanf("%d",&value);
	DisplayR(value);
	return 0;
}