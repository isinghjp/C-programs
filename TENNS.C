//Program to display first 10 natural no. & their sum.
#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
clrscr();
for(i=1;i<=10;i++)
{
printf("%d no is= %d\n",i,i);
sum=sum+i;
}
printf("sum =%d",sum);
getch();
}