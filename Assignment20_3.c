/*3. Accept N numbers from user and return the difference between largest
and smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3)
Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int Differnce(int Arr[], int iLength)
{
	int icnt=0;
	int min=0,max=0;
	min=Arr[0];
	max=Arr[0];
	for(icnt=0;icnt<iLength;icnt++)
	{
		if(Arr[icnt]<min)
		{
			min=Arr[icnt];
		}
		if(Arr[icnt]>max)
		{
			max=Arr[icnt];
		}
	}
	return max-min;
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
	iRet = Differnce(p, iSize);
	printf("Differnce is %d",iRet);
	free(p);
	return 0;
}