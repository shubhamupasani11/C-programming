//3.Write a recursive program which display below pattern.
//Output : 5 4 3 2 1
#include<stdio.h>

void DisplayR(int ino)
{
	if(ino>=1)
	{
		printf("%d\t",ino);
		ino--;
		DisplayR(ino);
	}
}
int main()
{
	DisplayR(5);
	return 0;
}