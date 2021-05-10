#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,a,positive=0,negative=0,zero=0;
	clrscr();
	while(i<=10)
	{
		printf("\n Enter a number :");
		scanf("%d", &a);
		if(a>0)
			positive++;
		else if(a<0)
			negative++;
		else if(a==0)
			zero++;
		else
			printf("not valid");
		i++;
	}
	printf("%d positives\t",positive);
	printf("%d negatives\t",negative);
	printf("%d zeros",zero);
	getch();
}