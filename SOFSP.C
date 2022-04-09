//Program to calculate sum of 5 subjects and find percentage.
#include<stdio.h>
#include<conio.h>
void main()
{
int s1,s2,s3,s4,s5,sum,total=500;
float per;
clrscr();
printf("enter marks of 5 subjects: ");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
sum=s1+s2+s3+s4+s5;
printf("sum = %d \n",sum);
per=(sum*100)/total;
printf("percentage = %f",per);
getch();
}