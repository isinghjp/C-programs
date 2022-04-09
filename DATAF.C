#include<stdio.h>
#include<conio.h>
void main()
{
float num;
clrscr();
num=4567.123456;
printf("number (f) 	= %f\n ",num);
printf("number (4.3f) 	= %4.3f\n ",num);
printf("number (0.2f) 	= %0.2f\n ",num);
printf("number (4.4f) 	= %4.4f\n ",num);
printf("number (0.20f) 	= %0.20f\n ",num);
printf("number (-f) 	= %-f\n ",num);
printf("number (20.3f) 	= %20.3f\n ",num);
printf("number (-20.2f) = %-20.2f\n ",num);
printf("number (4.9f) 	= %4.9f\n ",num);
printf("number (-0.20f) = %0.20f\n ",num);
getch();
}