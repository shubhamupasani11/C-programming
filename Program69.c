

#include<stdio.h>
#include<stdbool.h>
bool Primecheck(int no)
{
	int icnt=0;
	int Primecount=0;
	for(icnt=2;icnt<=no/2;icnt++)
	{
		if(no%icnt==0)
		{
			Primecount++;
			break;
		}
	}
	if(Primecount==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int no=16;
	bool bret=Primecheck(no);
	if(bret==false)
	{
		printf("number is:not prime\n");
	}
	else
	{
		printf("number is:prime\n");
	}
}