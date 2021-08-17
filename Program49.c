

#include"Program48.c"


extern void fun();
int main()
{
	extern int a;
	a=11;
	fun();
	return 0;
}