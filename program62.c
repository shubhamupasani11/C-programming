#include<stdio.h>


struct Demo
{
	int no1;
	float f;
	char ch;
};

int main()
{
	struct Demo obj;
	obj.no1=11;
	char ch='S';
	obj.ch='N';
	struct Demo *p=NULL;
	p=&obj;
	printf("chartre at demo is:%c\n",p->ch);
	
	return 0;
}