/*1. Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3
*/
#include<stdio.h>

int CountWR(char str[])
{
	static int icnt=0;
	if(*str!='\0')
	{
		if((*str)==' ')
		{
			icnt++;
		}
		str++;
		CountWR(str);
	}
	return icnt;
}

int main()
{
	int iret=0;
	char str[30];
	printf("Enter the string\n");
	scanf("%[^'\n']s",str);
	iret=CountWR(str);
	printf("Number of white spaces are:%d\n",iret);
	return 0;
}