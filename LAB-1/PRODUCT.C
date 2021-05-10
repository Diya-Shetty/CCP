//C program ro multiply two floating point numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,product;
	clrscr();
	printf("\n Enter the values of the numbers: ");
	scanf("%f,%f",&a,&b);
	product=a*b;
	printf("The product of the numbers is : %f",product);
	getch();
}