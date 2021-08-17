
#include<stdio.h>
#include<stdlib.h>

int NumberEven(int arr[],int size)
{
	int i=0;
	int icnt=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			icnt++;
		}
	}
	return icnt;
}

int main(int argc,char *argv[])
{
	
	int *arr=NULL;
	int iret=0;
	int isize=(argc-1);
	arr=(int*)malloc(isize*(sizeof(int)));
	iret=NumberEven(arr,isize);
	printf("Total number of Input alementsa  are:%d\n",argc);
	printf("Number of even numbers are:%d\n",iret);
	return 0;
}