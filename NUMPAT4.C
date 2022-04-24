//Numerical parttern dec 2012
#include<stdio.h>
#include<conio.h>
void main()
{
int i, j, k;
clrscr();
for(i=1; i<6; i++)
{
for(j=1;j<=i;j++)
printf(" ");
for(k=i; k<6; k++)
{
printf("%d", k);
}
printf("\n");
}
getch();
}