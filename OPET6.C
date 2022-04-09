#include<stdio.h>
#include<conio.h>
void main()
{ 
int x=20,y=35;
clrscr();
x=y++ + x++;
y= ++y + ++x;
printf("%d %d \n ",x,y);
getch();
}
