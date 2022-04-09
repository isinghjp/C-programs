//program to find area of circle
#include<stdio.h>
#include<conio.h>
int main()
{
int r;
float pi=3.14, area;

printf("enter radius of circle = ");
scanf("%d",&r);
area=pi*r*r;
printf("area of circle= %f",area);
getch();
return 0;
}
