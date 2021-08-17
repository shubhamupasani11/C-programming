//padding

#include<stdio.h>
#pragma pack(1)
struct Demo
{
	int no;     //4
	float f;      //4 
	char ch;       //1
}obj={10,20.5,'N'};
int main()
{
	printf("size of obj is:%d\n",sizeof(obj));
	int padding=0;
	padding=(sizeof(obj))-(sizeof(obj.no)+sizeof(obj.f)+sizeof(obj.ch));
	printf("padding:%d\n",padding);
	
	return 0;
}