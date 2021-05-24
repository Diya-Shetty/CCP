//C program to find an average of three integers using functions
#include<stdio.h>
#include<conio.h>
float avg(int a,int b,int c)
{
	float avg=(a+b+c)/3.0 ;
	return(avg);
}
void main()
{
	int a,b,c;
	float average;
	clrscr();
	printf("\nEnter the three numbers: ");
	scanf("%d,%d,%d",&a,&b,&c);
	average=avg(a,b,c);
	printf("The average of the three numbers is %f",average);
	getch();
}