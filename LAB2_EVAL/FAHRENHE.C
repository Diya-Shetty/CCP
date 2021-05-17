//Develop a C program to cnvert degrees Fahrenheit into degrees celcius.
#include<stdio.h>
#include<conio.h>
void main()
{
	float C,F;
	clrscr();
	printf("\nEnter the temperature in fahrenheit: ");
	scanf("%f",&F);
	C=((F-32)*5)/9;
	printf("%.2f Fahrenheit=%.2f Celcius",F,C);
	getch();
}