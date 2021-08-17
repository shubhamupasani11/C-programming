#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int size=0;
	float *arr=NULL;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	arr=(float*)calloc(size,sizeof(float));
	if(arr==NULL)
	{
		printf("Unable to allocate memory\n");
	}
	else
	{
		printf("Memory allocated success\n");
	}
	arr[0]=11;
	arr[1]=21;
	arr[2]=51;
	printf("Memory alocated at adreess:%lu\n",arr);
	printf("Size of arr is:%d\n",sizeof(arr));
	
	float *fptr=NULL;
	fptr=realloc(arr,5*sizeof(float));
	if(fptr==NULL)
	{
		printf("Not realloated memory\n");
	}
	else
	{
		printf("Succesfully reallctaed\n");
	}
	
	
	free(arr);
	
	printf("Memory alocated at adreess:%lu\n",arr);
	int *p=NULL;
	printf("Size of p pointer is:%d\n",sizeof(p));
	return 0;
}