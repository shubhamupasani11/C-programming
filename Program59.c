#include<stdio.h>

int main()
{
	//typecsting
	int no=11;
	void *p=NULL;
	p=&no;
	printf("value stored by pointer p:%d\n",*(int *)p);

	float f=3.14;
	p=&f;
	printf("value stored by pointr p i:%f\n",*(float *)p);
	
	//null pointer
	int *pointer=NULL;
	return 0;
}