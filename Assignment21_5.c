/*5. Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
*/
#include<stdio.h>
void Display(char ch)
{
	
	if((ch=='a')||(ch=='A'))
	{
		printf("Your Exam Is At 7 AM\n");
	}
	if((ch=='b')||(ch=='B'))
	{
		printf("Your Exam Is At 8.30 AM\n");
	}
	else if((ch=='c')||(ch=='C'))
	{
		printf("Your Exam Is At 9.20 AM\n");
	}
	else
	{
		printf("Your Exam Is At 10.30 AM\n");
	}
	
}

int main()
{
	char cvalue='\0';
	
	printf("Enter Your Division\n");
	scanf(" %c",&cvalue);
	Display(cvalue);
	
	return 0;
	
}