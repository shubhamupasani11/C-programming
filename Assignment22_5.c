/*5. Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : 	Decimal 65
			Octal 0101
			Hexadecimal 0X41
*/
#include<stdio.h>
void ASCII(char ch)
{
	
	printf("ASCII table\n");
	printf("%d\t%o\t%x\t",ch,ch,ch);
}
int main()
{
	char cvalue='\0';
	printf("enter the character\n");
	scanf(" %c",&cvalue);
	ASCII(cvalue);
	return 0;
}
