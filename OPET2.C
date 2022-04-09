#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
b=2;
a=2*(b++);
c=2*(++b);
printf(" value of a = %d ",a);
printf(" value of c = %d ",c);
getch();
}