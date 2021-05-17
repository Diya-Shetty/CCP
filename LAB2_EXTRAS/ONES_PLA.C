//Program to print the digit at one's place of a number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,digit;
	clrscr();
	printf("\nEnter the number: ");
	scanf("%d",&n);
	digit=n%10;
	printf("The digit at one's place is %d",digit);
	getch();
}