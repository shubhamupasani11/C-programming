//file handiling using functions

#include<stdio.h>


int main()
{
	FILE *file;
	file=fopen("C:/Users/hp/Desktop/After LB/Shubham.txt","w");
	if(file==NULL)
	{
		printf("Unble to opened the file\n");
	}
	else
	{
		printf("File opened sucesfully\n");
	}
	char *str="MY name shubham and i am from sangmner\n";
	fprintf(file,"%s\n",str);
	
	char arr[50];
	printf("Enter the data\n");
	scanf("%[^'\n']s",arr);
	fprintf(file,"%s\n",arr);
	printf("data written success\n");
	
	
	fclose(file);
	
	return 0;
}