

//main.c
#include<stdio.h>
#include"header.c"
int main()
{
	int size=0;
	int i=0,iret=0;
	
	printf("Enter the number of elemnts\n");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	iret=SumPrime(arr,size);
	printf("Sum of Prime Numbers are:%d\n",iret);
	
	
	return 0;
}