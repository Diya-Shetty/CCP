//C program to check the equality of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter the values the numbers: ");
	scanf("%d,%d",&a,&b);
	if(a==b)
		printf("\n The numbers are equal");
	else
		printf("\n The numbers are not equal");
	getch();
}