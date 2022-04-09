// program to print full Pyramid:
#include<stdio.h>
#include<conio.h>
#define MAX 5

void main()
{
	int i,j;
	int s=4;
	clrscr();
	for(i=0;i< MAX;i++)
	{

		for(j=0;j<s;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}

		printf("\n");
		s--;
	}

	s=0;

	for(i=MAX;i>0;i--)
	{

		for(j=0;j<s;j++)
		{
			printf(" ");
		}
		for(j=0;j< i;j++)
		{
			printf("* ");
		}

		printf("\n");
		s++;
	}
	getch();
}

