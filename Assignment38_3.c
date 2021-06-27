//3. Write a recursive program which accept string from user and count number of characters.
//Input : Hello
//Output : 5
#include<stdio.h>

int StrlenR(char str[])
{
	static int icnt=0;
	if(*str!='\0')
	{
		icnt++;
		str++;
		StrlenR(str);
	}
	return icnt;
}

int main()
{
	int iret=0;
	char str[10];
	printf("Enter the string\n");
	scanf("%s",str);
	iret=StrlenR(str);
	printf("length of string is:%d\n",iret);
	return 0;
}