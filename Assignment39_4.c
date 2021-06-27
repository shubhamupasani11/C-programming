//4. Write a recursive program which accept number from user and return smallest digit
//Input : 87983
//Output : 3
#include<stdio.h>

int MinR(int no)
{
	static int digit=0;
	static int min=9;
	if(no>0)
	{
		digit=no%10;
		if(digit<min)
		{
			min=digit;
		}
		no=no/10;
		MinR(no);
	}
	return min;
}
int main()
{
	int value=0,iret=0;
	printf("enter the number\n");
	scanf("%d",&value);
	iret=MinR(value);
	printf("Min digit of given number:%d\n",iret);
	return 0; 
}