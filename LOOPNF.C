//Program to print half Pyramid of numbers(using nasted for).
#include<stdio.h>
#include<conio.h>
void main( )
{
 int i,j;
 clrscr();
 for(i=1;i<5;i++)
 {
   printf("\n");
   for(j=i;j>0;j--)
   {
     printf("%d",j);
   }
 }
 getch();
}
