#include<stdio.h>

int main()
{
	int d, a = 1, b = 2;
	d =  a++ + ++b;
	printf("%d %d %d", d, a, b);     //5 2  3
	float f=3.25;
	f++;
	printf("%f",f);
	
	
	
	
	return 0;
}