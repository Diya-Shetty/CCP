//C program to find the square of any number
#include<stdio.h>
#include<conio.h>
#include<math.h>
int square(int a)
{
	int sqr;
	sqr=pow(a,2);
	return(sqr);
}
void main()
{
	int a,sqr1;
	clrscr();
	printf("\nEnter the number: ");
	scanf("%d",&a);
	sqr1=square(a);
	printf("The square of the number is %d",sqr1);
	getch();


}