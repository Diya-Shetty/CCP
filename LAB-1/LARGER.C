//C program to find the larger of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter the values of the numbers: ");
	scanf("%d,%d",&a,&b);
	if(a>b)
	{
		printf("%d",a);
		printf(" is the larger number.");
	}
	else
	{
		printf("%d",b);
		printf(" is the larger number.");
	}
	getch();
}