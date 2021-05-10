// print all even numbers from 1 to n
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("\n Enter the number of numbers: ");
	scanf("%d", &n);
	while(i<=n)
	{
		if(i%2==0)
			printf("%d \t",i);
		i++;
	}
	getch();

}