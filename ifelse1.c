//Program to evulate if else statement.
#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("Input your age:");
	scanf("%d",&age);
	if(age>=18)
	{
	 	printf("you can vote");
	}
	else
	{
     		printf("you are not eligible for voting");
	}
	getch();
}