
#include<stdio.h>

union Demo
{
	int no;
	double d;
	char ch;
};
int main()
{
	union Demo obj;
	printf("Size of union is:%d\n",sizeof(obj));
	return 0;
}
