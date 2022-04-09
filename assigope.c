//Example of assignment operator
#include<stdio.h>
#include<conio.h>
void main()
{
	int a = 21; 
	int c ;
	c = a;
	clrscr();
 	printf("Value of c = %d \n", c );
	c += a;
	printf("Value of c = %d\n", c );
	c -= a;
	printf("Value of c = %d\n", c );
	c *= a;
	printf("Value of c = %d\n", c );
	c /= a;
	printf("Value of c = %d\n", c );
	c = 200;
	c %= a;
	printf("Value of c = %d\n", c );
	getch();
}