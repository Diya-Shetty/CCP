//check whether a given number is positive, negative or zero
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n Enter an integer: ");
	scanf("%d",&a);
	if(a<0)
		printf("%d is negative",a);
	if(a>0)
		printf("%d is positive",a);
	if(a==0)
		printf("%d is zero",a);
	getch();
}