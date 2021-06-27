/*2. Accept N numbers from user and display all such elements which are
divisible by 5.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 85 80
Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		if((Arr[i]%5)==0)
		{
			printf("%d\t",Arr[i]);
		}
	}
}



int main()
{
	int *arr=NULL;
	int i=0;
	int length=0;
	printf("enter the number of elements\n");
	scanf("%d",&length);
	arr=(int*)malloc(length*sizeof(int));
	printf("enter the elements:\n");
	for(i=0;i<length;i++)
	{
		printf("enter the elements %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	Display(arr,length);
	free(arr);
	return 0;
	
}