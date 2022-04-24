//Program to find greatest in 3 numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter value of a, b & c: ");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	printf("a is greatest");
	if((b>c)&&(b>a))
	printf("b is greatest");
	if((c>a)&&(c>b))
	printf("c is greatest");
	getch();
}