/*1. Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)
Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLength)
{
	int i=0;
	int sum1=0;
	int sum2=0;
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%2)==0)
		{
			sum1=sum1+Arr[i];
		}
		if((Arr[i]%2)!=0)
		{
			sum2=sum2+Arr[i];
		}
	}
	return sum1-sum2;
}
int main()
{
	int iSize = 0,iRet = 0,iCnt = 0;
	int *p = NULL;
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	p = (int *)malloc(iSize * sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate memory");
	return -1;
	}
	
	for(iCnt = 0;iCnt<iSize; iCnt++)
	{
		printf("Enter element : %d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = Difference(p, iSize);
	printf("Result is %d",iRet);
	free(p);
	return 0;
}