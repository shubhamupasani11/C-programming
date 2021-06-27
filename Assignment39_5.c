//5. Write a recursive program which accept number from user and return its reverse number.
//Input : 523
//Output : 325
#include<stdio.h>

int ReverseR(int no)
{
	static int digit=0,ret=0;
	if(no>0)
	{
		digit=no%10;
		ret=(ret*10)+digit;
		no=no/10;
		ReverseR(no);
	}
	return ret;
}
int main()
{
	int value=0,iret=0;
	printf("enter the number\n");
	scanf("%d",&value);
	iret=ReverseR(value);
	printf("Reverse of given number:%d\n",iret);
	return 0; 
}