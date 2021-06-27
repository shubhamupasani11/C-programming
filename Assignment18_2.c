/*2. Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3)
Program Layout :
*/
#include<stdlib.h>
#include<stdio.h>

int Frequency(int Arr[], int iLength)
{
	int i=0,icnt1=0,iCnt2=0;
	for(i;i<iLength;i++)
	{
		if(((Arr[i])%2)==0)
		{
			icnt1++;
		}
		if(((Arr[i])%2)!=0)
		{
			iCnt2++;
		}
	}
	return icnt1-iCnt2;
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
	iRet = Frequency(p, iSize);
	printf("Difference is:%d",iRet);
	free(p);
	return 0;
}