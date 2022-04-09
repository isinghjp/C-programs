//Program to reverse a given number.
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,r=0,n1;
clrscr();
printf("enter any no to get its reverse: ");
scanf("%d",&n);
n1=n;
while(n>=1)
{
a=n%10;
r=r*10+a;
n=n/10;
}
printf("reverse=%d",r);
if(n1==r)
{
printf("\n Number is Polindrom");
}
else
{
printf("\n not polindrom");
}
getch();
}