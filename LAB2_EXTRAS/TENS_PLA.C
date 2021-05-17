//Program to print the digit at ten's place of a number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,digit;
	clrscr();
	printf("\nEnter the number: ");
	scanf("%d",&n);
	digit=(n%100)/10;
	printf("The digit at ten's place is %d",digit);
	getch();
}