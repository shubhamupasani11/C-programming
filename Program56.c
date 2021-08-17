

#include<stdio.h>

int main()
{
	char str[50];
	printf("Enter the string\n");
	fgets(str,40,stdin);
	printf("Entered string is:%s\n",str);
	
	char arr[]="MY SELF UPASANI DON";
	printf("%c",arr[6]);
	return 0;
}