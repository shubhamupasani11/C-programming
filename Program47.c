#include<stdio.h>

static int x;
void Fun()
{
	auto int no;
	printf("default value is garbage value is:%d\n",no);
	
	register int value;
	printf("defalur value of register staoge class variable is:%d\n",value);
	
	static int value2;
	printf("defalur value of statcic  local class variable is:%d\n",value2);
}
int AddDigit(int no)
{
	int idigit=0;
	int sum=0;
	while(no>0)
	{
		idigit=no%10;
		sum=sum+idigit;
		no=no/10;
	}
	return sum;
}

int AddDigitR(int no)
{
	static int isum=0;
	int digit=0;
	if(no>0)
	{
		digit=no%10;
		isum=isum+digit;
		AddDigitR(no=no/10);
	}
	return isum;
}
int main()
{	
	Fun();
	printf("defalur value of statci global storage class variable is:%d\n",x);
	
	int iret=0;
	int no=145;
	iret=AddDigit(no);
	printf("Addition of digit is:%d\n",iret);

	iret=AddDigitR(no);
	printf("Addition of digit by recusrion is:%d\n",iret);
	
	
	return 0;
}