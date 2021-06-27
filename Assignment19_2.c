/*2. Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.

Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 1
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : -1
Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>
int FirstOcc(int Arr[], int iLength, int iNo)
{
	int i=0;
	for(i=0;i<iLength;i++)
	{
		if((Arr[i])==iNo)
		{
			break;
		}
	}
	if(i==iLength)
	{
		return -1;
	}
	else
	{
		return i;
	}
		
}
int main()
{
	int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
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
	printf("Enter %d elements ",iSize);
	for(iCnt = 0;iCnt<iSize; iCnt++)
	{
		printf("Enter element : %d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = FirstOcc(p,iSize,iValue);
	if(iRet==-1)
	{
		printf("No such number\n");
	}
	else
	{
		printf("First occurrence of number is %d\n",iRet);
	}
	
	free(p);
	return 0;
}