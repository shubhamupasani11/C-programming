
//function pointer

#include<stdio.h>
int Addition(int a,int b)
{
	return a+b;
}
int (*fptr)(int,int);
int main()
{
	int ret=0;
	int no1=10;
	int no2=20;
	
	fptr=Addition;
	ret=fptr(10,20);
	printf("answer is:%d\n",ret);
	return 0;
}
