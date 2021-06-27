//2. Write a recursive program which accept number from user and return
//largest digit
//Input : 87983
//Output : 9
#include<stdio.h>

int MaxR(int no)
{
	static int digit=0;
	static int max=0;
	if(no>0)
	{
		digit=no%10;
		if(digit>max)
		{
			max=digit;
		}
		no=no/10;
		MaxR(no);
	}
	return max;
}
int main()
{
	int value=0,iret=0;
	printf("enter the number\n");
	scanf("%d",&value);
	iret=MaxR(value);
	printf("Max digit of given number:%d\n",iret);
	return 0; 
}