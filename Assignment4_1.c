//1.Write a program which accept number from user and display its multiplication of factors.
//Input : 12
//Output : 144 (1 * 2 * 3 * 4 * 6)
//Input : 13
//Output : 1 (1)
//Input : 10
//Output : 10 (1 * 2 * 5)

#include<stdio.h>
int MultFact(int iNo)
{
	int icnt=0;
	int mult=1;
	for(icnt=1;icnt<=iNo/2;icnt++)
	{
		if((iNo%icnt)==0)
		{
			mult=mult*icnt;
		}
	}
	return mult;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet = MultFact(iValue);
	printf("%d",iRet);
	return 0;
}