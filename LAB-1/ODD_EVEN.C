//Check if a given number is even or odd
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n Enter the number: ");
	scanf("%d",&a);
	if(a%2==0)
		printf("%d is an even number",a);
	else
		printf("%d is an odd number",a);
	getch();
}
