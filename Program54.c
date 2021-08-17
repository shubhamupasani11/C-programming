



#include<stdio.h>


int main()
{
	FILE *file;
	char filename[50];
	int id=0;
	char FullName[100];
	///////////////////////open file////////////////////////////////////////////
	printf("Enter the file name that you want to create\n");
	scanf("%s",filename);
	file=fopen(filename,"r");
	if(file==NULL)
	{
		printf("Unlabe to open||Error\n");
	}
	else
	{
		printf("File opened successfully\n");
	}
	char data[25];
	while(fscanf(file,"%s\n",data)!=EOF)
	{
		printf("%s",data);
	}
	
	
	
	
	return 0;
