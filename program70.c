
#include<stdio.h>
void main()
{
	char arr[]="MY NAME IS SHUBHAM";
	printf("%s\n",arr);
	char str[]={'s','h','u','b','h','a','m','\0'};
	
	char brr[30];
	gets(brr);
	printf("Entered string is by gets :%s\n",brr);
	
	char drr[20];
	fgets(drr,20,stdin);
	printf("Entered string is by fgets:%s\n",drr);
	
	char  str1[30];
	scanf("%s",str1);
	printf("string by scanf is:%s\n",str1);
	
	char trr[35];
	scanf("%[^'\n']s",trr);
	printf("String by this scanf is:%s\n",trr);
	
	
}