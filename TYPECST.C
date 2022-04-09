//Example of typecasting

#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter value for a = ");
	scanf("%d",&a);
	printf("value fo a after type cast %f ", (float)a/2);
	getch();
}