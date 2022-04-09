#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,x,y;
	clrscr();
	j=i=6;
	printf("initial value of i %d \n",i);
	x=i++;
	printf("x=i++, value of x=%d, and value of i=%d \n",x,i);
	i=j;
	y=++i;
	printf("initial value of j %d \n",j);
	printf("y=++i, value of y=%d, and value ofi=%d \n",y,i);
	getch();
}