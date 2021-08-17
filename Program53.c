

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
	file=fopen(filename,"w");
	if(file==NULL)
	{
		printf("Unlabe to open||Error\n");
	}
	else
	{
		printf("File opened successfully\n");
	}
	//////////////////write into file/////////////////////////////////////////////////
	printf("Enter the data to write");
	printf("Enter the emploee id\n");
	scanf("%d",&id);
	fprintf(file,"Employee Id=%d\n",id);
	
	printf("Enter the emploee Full name\n");
	scanf("%s",FullName);
	fprintf(file,"Name=%s\n",FullName);
	
	fputc('Q',file);
	
	fputs("HELLO,SANGMNER",file);
	fseek(file,5,SEEK_CUR);
	fclose(file);
	
	
	
	
	return 0;
}