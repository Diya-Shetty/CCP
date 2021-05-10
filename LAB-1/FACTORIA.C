//C program to find the factorial of a number
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,a,fac=1;
	clrscr();
	printf("\n Enter a number: ");
	scanf("%d",&a);
	while(i<=a)
	{
		fac=fac*i;
		i++;
	}
	printf("%d is the factorial",fac);
	getch();
}