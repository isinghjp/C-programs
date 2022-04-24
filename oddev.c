//Program to find whether given no. is even or odd.
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter any no: ");
scanf("%d",&n);
if(n%2==0)
printf("no is even");
else
printf("no is odd");
getch();
}