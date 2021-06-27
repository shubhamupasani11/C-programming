/*
5. Accept N numbers from user and display summation of digits of each
number.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21
Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
void SumDigit(int Arr[], int iLength)
{
	int icnt=0;
	int digit=0;
	for(icnt=0;icnt<iLength;icnt++)
	{
		int sum=0;
		while(Arr[icnt]>0)
		{
			digit=Arr[icnt]%10;
			sum=sum+digit;
			Arr[icnt]=Arr[icnt]/10;
		}
		printf("%d\t",sum);
	}
}

int main()
{
	int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
	int *p = NULL;
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	p = (int *)malloc(iSize * sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter %d elements ",iSize);
	for(iCnt = 0;iCnt<iSize; iCnt++)
	{
		printf("Enter element : %d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	SumDigit(p, iSize);
	
	free(p);
	return 0;
}