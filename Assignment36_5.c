//5.Write a recursive program which display below pattern.
//Output : a b c d e f
#include<stdio.h>

void DisplayR()
{
	static char ch='a';
	if(ch<='f')
	{
		printf("%c\t",ch);
		ch++;
		DisplayR();
	}
}
int main()
{
	
	DisplayR();
	return 0;
}