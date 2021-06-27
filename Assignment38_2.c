//2. Write a recursive program which accept number from user and return summation of its //digits.
//Input : 879
//Output : 24
#include<stdio.h>

int SumR(int ino)
{
	static int isum=0;
	static int idigit=0;
	if(ino>0)
	{
		idigit=ino%10;
		isum=isum+idigit;
		ino=ino/10;
		SumR(ino);
	}
	return isum;
}
int main()
{
	int ivalue=0,iret=0;
	printf("Enter the value\n");
	scanf("%d",&ivalue);
	iret=SumR(ivalue);
	printf("Summation of digits of a given number is:%d\n",iret);
	return 0;
}