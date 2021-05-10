// C program to check whether it is a prime number or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,flag=0;
	clrscr();
	printf("\n Enter a number: ");
	scanf("%d",&a);
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{

			flag++;
			break;
		}
	}
	if(a==1)
		printf("\n%d is neither a prime nor a composite function.",a);
	else
	{
		if(flag==0)
			printf("\n%d is a prime number",a);
		else
			printf("\n%d is not a prime number",a);
	}
	getch();
}