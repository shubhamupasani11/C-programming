//3. Write a recursive program which accept string from user and count number of small characters.
//Input : HElloWOrlD
//Output : 5
#include<stdio.h>

int SmallChR(char str[])
{
	static int icnt=0;
	if(*str!='\0')
	{
		if((*str>'a')&&(*str<'z'))
		{
			icnt++;
		}
		str++;
		SmallChR(str);
	}
	return icnt;
}
int main()
{
	int iret=0;
	char str[30];
	printf("Enter the string\n");
	scanf("%s",str);
	iret=SmallChR(str);
	printf("Number of small characters are:%d\n",iret);
	return 0;
}