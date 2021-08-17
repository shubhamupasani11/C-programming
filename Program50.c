
#include<stdio.h>

int main()
{
	//static array creattion
	int arr[5];
	
	int brr[6]={10,20,30,40,50};
	printf("value at indesx 5 is:%d\n",brr[5]);
	float crr[4]={10.0,20.0,30.0};
	printf("value at insdex 4 is:%f\n",crr[4]);
	
	char drr[7]={'s','h','u','b','h','a','m'};
	printf("sizeof drr is:%d\n",sizeof(drr)); //sizeof array
	printf("%c\n",drr[2]);
	
	brr[2]=40;                              //modify specicd element
	printf("final op:%d\n",(brr[2]/brr[0]));
	
	
	printf("%lu\n",arr);
	printf("%lu\n",&arr);
	return 0;
}