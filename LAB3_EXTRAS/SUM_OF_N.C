//C program to find sum of n natural numbers using functions
#include<stdio.h>
#include<conio.h>
int sum(int n)
{
	int s=0,i;
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	return(s);
}
void main()
{
	int n,sum1;
	clrscr();
	printf("\nEnter the number till which the sum is to be considered: ");
	scanf("%d",&n);
	sum1=sum(n);
	printf("The sum of %d natural numbers is %d",n,sum1);
	getch();

}