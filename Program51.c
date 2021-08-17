

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//Dynamic memory allocation to array
	int size=0;
	int i=0;
	int *arr=NULL;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	arr=(int*)malloc(size*sizeof(int));
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	i=0;
	while(i!=size)
	{
		printf("%d\t",arr[i]);
		i++;
	}
	
	
	return 0;
}