//C program to convert hours into minutes
#include<stdio.h>
#include<conio.h>
int time(float a)
{
	int min;
	min=a*60;
	return(min);

}
void main()
{
	float a;
	int minutes;
	clrscr();
	printf("\nEnter the time in hours: ");
	scanf("%f",&a);
	minutes=time(a);
	printf("The time in minutes is %d");
	getch();

}