
#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="Hello";
	char t[]="Delhi";
	strcat(t,s);
	printf("%s\n",s);
	printf("%s\n",t);
	
	int j1=10;
	printf("%u\n",&j1);
	//printf("%d\n",*j);
	
	int i=0;
	int j=0;
	int m=0;
	int arr[]={1,2,3,4,5};
	i=++arr[1];
	j=arr[1]++;
	m=arr[i++];
	
	
	printf("%d\t,%d\t,%d\t",i,j,m);
	
	int  y=10;
	y++;
	printf("%d\n",y);
	
	int z=10;
	++z;
	printf("%d\t",z);
	
	
	
	return 0;
}