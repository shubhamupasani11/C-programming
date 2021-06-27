//4.Write a recursive program which display below pattern.
//Input : 6
//Output : A B C D E F

#include<stdio.h>
void Display(int ino)
{
	static char ch='A';
	if(ino>0)
	{
		printf("%c\t",ch);
		ch++;
		ino--;
		Display(ino);
	}
}
int main()
{
	int value=0;
	printf("Enter te value\n");
	scanf("%d",&value);
	Display(value);	
	return 0;
}