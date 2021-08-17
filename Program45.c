

#include<stdio.h>

int main()
{
	//premitive data type:
	int no=11;
	float f=13.14;
	double d=23.131313;
	char ch='M';
	//void k=21;
	printf("%d\n",no);
	printf("%c\n",no);
	printf("%lu\n",no);
	printf("%ld\n",no);
	printf("%f\n",no);    
	
	printf("%ld\n",f);
	printf("%f\n",f);  
	
	//printf("%ld\n",d);
	printf("%f\n",d);
	printf("%lf\n",d);
	
	
	
	
	printf("*************************\n");
	int x=15.15;
	float y=10;
	printf("%d\n",x);
	printf("%f\n",x);
	
	printf("%d\n",y);
	printf("%f\n",y);
	
	
	
	const int a=20;
	//a++;
	 //a=30;
	 
	 
	 int i=35;
	 i=45;
	 printf("%d\n",i);
	 
	 const int z;
	 //z=100;
	 printf("%d\n",z);   //default value
	 
	 
	 int v;
	 printf("%d\n",v);   //default value
	
	
	printf("value of j\n");
	volatile int j;
	printf("%d\n",j);
	j++;
	printf("%d\n",j);
	
	
	int no1=60;
	printf("sizeof no1 is:%d\n",sizeof(no1));	
	
	short int no2=70;
	printf("sizeof no2 is:%d\n",sizeof(no2));
	
	long int no3=80;
	printf("sizeof no3 is:%d\n",sizeof(no3));
	
	
	signed int no4=145;
	printf("sizeof no4:%i\n",sizeof(no4));
	
	
	
	
	
	
	char ch1='M';
	ch1++;
	printf("%c\n",ch1);

	double no5=99.999;
	no5++;
	printf("%lf\n",no5);
	
	return 0;
}