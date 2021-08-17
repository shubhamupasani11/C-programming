

//File handling usin syatem calls


#include<stdio.h>
#include<fcntl.h>
#include<io.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int fd=0,ret=0;
	char arr[100];
	char str[]="My name is shubham and im from sangmner";
	fd=creat("upi.txt",0777);
	if(fd==-1)
	{
		printf("Unable to create the file\n");
	}

	else
	{
		printf("File created succesffullt with fd:%d\n",fd);
	}
	fd=creat("ui.txt",0777);
	if(fd==-1)
	{
		printf("Unable to create the file\n");
	}

	else
	{
		printf("File created succesffullt with fd:%d\n",fd);
	}
	fd=open("ui.txt",O_RDWR);
	if(fd==-1)
	{
		printf("unble tomopen\n");
	}
	else
	{
		printf("File opneed suu with fd:%d\n",fd);
	}
	//printf("Enter the data into file\n");
	//scanf("%[^'\n']s",arr);
	ret=write(fd,str,10);
	if(fd!=0)
	{
		printf("data written succesffuly with fd is\n");
	}
	ret=read(fd,str,15);
	printf("data from the file is:%s\n",str);
	write(2,str,15);
	//lseek(fd,0,SEEK_SET);
	close(fd);
	return 0;
}