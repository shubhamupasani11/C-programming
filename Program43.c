


#include<stdio.h>
#include<stdbool.h>
bool CheckPrime(int no)
{
	int i=0;
	int icnt=0;
	for(i=2;i<=no/2;i++)
	{
		if(no%i==0)
		{
			icnt++;
			break;
		}
	}
	if(icnt>0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	int no=12;
	bool bret=false;
	if(bret==true)
	{
		printf("number is  prime\n");
	}
	else
	{
		printf("Number is not prime\n");
		
	}
	return 0;
}