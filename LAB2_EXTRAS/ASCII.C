//Program to print ASCII value of a character
#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	printf("\nEnter the character: ");
	scanf("%c",&a);
	printf("\nThe ASCII value of %c is %d",a,a);
	getch();
}