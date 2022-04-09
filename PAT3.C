//Program to print stars Sequence3.
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
printf(" ");
{
for(k=1;k<=i*2-1;k++)
printf("*");
}
printf("\n");
}
getch();
}
