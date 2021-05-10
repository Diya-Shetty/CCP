//C program to find the sum of 10 natural numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,sum=0;
	clrscr();
	while(i<=10)
	{
		sum=sum+i;
		i++;
	}
	printf("The sum ofthe first 10 natural numbers: %d",sum);
	getch();
}