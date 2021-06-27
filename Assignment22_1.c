/*1. Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
*/
#include<stdio.h>
void DisplayASCII()
{
	int icnt=0;
	for(icnt=0;icnt<=128;icnt++)
	{
		printf("ASCII TABLE\n");
	
		printf("%c\t%d\t%o\t%x\n",icnt,icnt,icnt,icnt);
	}

}
int main()
{
	DisplayASCII();
	return 0;
}