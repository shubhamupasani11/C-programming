/*5. Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0
Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLength, int iNo)
{
	int i=0,icnt=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==iNo)
		{
			icnt++;
		}
	}
	return icnt;
}
int main()
{
	int iSize = 0,iRet = 0,iCnt = 0,  iValue = 0;
	int *p = NULL;
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	printf("Enter the number\n");
	scanf("%d",&iValue);
	p = (int *)malloc(iSize * sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate memory");
	return -1;
	}
	printf("Enter %d elements\n",iSize);
	for(iCnt = 0;iCnt<iSize; iCnt++)
	{
		printf("Enter element %d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = Frequency(p, iSize,iValue);
	printf("Frequency of given input number is:%d\n",iRet);
	free(p);
	return 0;
}