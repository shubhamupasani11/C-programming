//1. Write a recursive program which accept number from user and display below pattern.
//Input : 5
//Output : 5 * 4 * 3 * 2 * 1 *

#include<stdio.h>

void DisplayR(int ino)
{
	if(ino>0)
	{
		printf("%d\t*\t",ino);
		ino--;
		DisplayR(ino);
	}	
}
int main()
{
	int ivalue=0;
	printf("Enter the value\n");
	scanf("%d",&ivalue);
	DisplayR(ivalue);
	return 0;
}