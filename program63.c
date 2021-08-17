//nested strcutures
///1///////////
#include<stdio.h>
struct Demo
{
	int no;
	float f;
	struct hello
	{
		int x;
		char ch;
	}hobj;
	
}dobj;

////2//////////////////////////////////////////
struct data
{
	int i;
	int j;
};

struct data2
{
	int a;
	int b;
	struct data obj1;
};
///////////////////////////////////////////

int main()
{
	dobj.no=11;
	dobj.hobj.x=21;
	return 0;
}