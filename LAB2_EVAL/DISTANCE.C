//Implement a C program to find distance between two points.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float x1,x2,y1,y2,distance;
	clrscr();
	printf("\nEnter the x coordinate of the first point: ");
	scanf("%f",&x1);
	printf("\nEnter the y coordinate of the first point: ");
	scanf("%f",&y1);
	printf("\nEnter the x coordinate of the second point: ");
	scanf("%f",&x2);
	printf("\nEnter the y coordinate of the second point: ");
	scanf("%f",&y2);
	distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("The distnace between the two points is %.2f",distance);
	getch();

}