//C program to find the area of a triangle given its sides as input using functions
#include<conio.h>
#include<stdio.h>
#include<math.h>
float areaoftriangle(float a,float b,float c)
{
	float s,area2;
	s=(a+b+c)/2 ;
	area2=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of the triangle is %f",area2);
	return 0 ;
}
void main()
{
	float a,b,c;
	clrscr();
	printf("\nEnter the sides of the triangle: ");
	scanf("%f,%f,%f",&a,&b,&c);
	areaoftriangle(a,b,c);
	getch();

}