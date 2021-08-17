
#include<stdio.h>


int main()
{
	int no=11;
	int *p=&no;
	printf("Size of p is:%d\n",sizeof(p));
	printf("value which is pointed by p is:%d\n",*p);
	
	int **q=&p;
	printf("value which is pointed by q is:%d\n",**q);
	
	//pointer to array
	int arr[]={10,20,30,40,50};
	int *ptr=arr;
	printf("value stored at adress arr is:%d\n",*arr);
	printf("value at adress 1 is:%d\n",*(arr+1));
	printf("sizeof arr is:%d\n",sizeof(arr));
	
	
	//array of pointers
	int no1=11;
	int no2=21;
	int no3=51;
	int no4=101;
	
	int *brr[]={&no1,&no2,&no3,&no4};
	printf("value stored at adress no1is:%d\n",*(brr[0]));
	//printf("value stored at adress no1is:%d\n",*(brr[4])); NA runtime error
	
	
	//pointer Arithmetic
	//1.Pointer with integer
	int array[]={10,20,30,40};
	int *ptr1=NULL;
	
	ptr1=array;                //let ptr1=100;
	printf("value at index 2 is:%d\n",*(ptr1+2));
//internally("",*(100+2*(size of data type)))
	
	//addition of two pointers //which is  not allowd
	
	int *ptr3=NULL,*ptr4=NULL;
	ptr3=array;
	ptr4=&(array[2]);
	printf("%lu\n",(ptr3+ptr4));
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}