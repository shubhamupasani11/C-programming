/*4. Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
bool SpecialSymobl(char ch)
{
	if((ch=='~')||(ch=='!')||(ch=='@')||(ch=='#')||(ch=='%')||(ch=='^')||(ch=='&')||(ch=='*')||(ch=='(')||(ch==')'))
	{
		return true;
	}
	else
	{
		return false;
	}
	
	
}
int main()
{
	char cvalue='\0';
	int bret=false;
	printf("Enter the value\n");
	scanf(" %c",&cvalue);
	bret=SpecialSymobl(cvalue);
	if(bret==true)
	{
		printf("It is a special symbol\n");
	}
	else
	{
		printf("It is not special symbol\n");
	}
	
	return 0;
}
