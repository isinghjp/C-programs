#include<stdio.h>
#include<conio.h>
void main()
{
	int a=8, b=2, x=8, y=2, sum1, sum2;
	clrscr();
	sum1=a+(++b);
	sum2=x+(y++);
	printf("\n Sum1 = %d",sum1);
	printf("\n Sum2 = %d",sum2);
	getch();
}