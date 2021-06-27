//5. Write a recursive program which accept number from user and return its
//product of digits.
//Input : 523
//Output : 30
#include<stdio.h>

int ProductR(int ino)
{
	static int idigit=1,imult=1;
	if(ino>0)
	{
		idigit=ino%10;
		imult=imult*idigit;
		ino=ino/10;
		ProductR(ino);
	}
	return imult;
}

int main()
{
	int ivalue=0,iret=0;
	printf("Enter the value\n");
	scanf("%d",&ivalue);
	iret=ProductR(ivalue);
	printf("Product of digits of a given number is:%d\n",iret);
	return 0;
}