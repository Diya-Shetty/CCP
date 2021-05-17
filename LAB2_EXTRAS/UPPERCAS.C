//Program to read a character in uppercase and then print it in lower case
#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	printf("\nEnter the character in uppercase: ");
	scanf("%c",&a);
	printf("\nThe character in lower case is %c",a+32);
	getch();
}