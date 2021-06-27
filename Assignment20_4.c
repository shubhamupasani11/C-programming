/*
4. Accept N numbers from user and display all such numbers which contains
3 digits in it.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 665 953 858
Program Layout

*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
void Digit(int Arr[], int iLength)
{
	int icnt=0;
	for(icnt=0;icnt<iLength;icnt++)
	{
		if((Arr[icnt]>=100)&&(Arr[icnt]<=999))
		{
			printf("%d\t",Arr[icnt]);
		}
			
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
	Digit(p, iSize);
	
	free(p);
	return 0;
}