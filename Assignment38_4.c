//4. Write a recursive program which accept number from user and return its factorial.
//Input : 5
//Output : 120
#include<stdio.h>

int FactorialR(int ino)
{
	static int i=1,fact=1;
	if(i<=ino)
	{
		fact=fact*i;
		i++;
		FactorialR(ino);
	}
	return fact;
}

int main()
{
	int ivalue=0,iret=0;
	printf("Enter the value\n");
	scanf("%d",&ivalue);
	iret=FactorialR(ivalue);
	printf("Factorial of a given number is:%d\n",iret);
	return 0;
}