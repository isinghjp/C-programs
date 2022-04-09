//Program to evulate nasted if(if inside if is called nested if).
#include<stdio.h>
#include<conio.h>
void main()
{
	int var1, var2;
	clrscr();
	printf("Input the value of var1:");
	scanf("%d", &var1);
	printf("Input the value of var2:");
	scanf("%d",&var2);
	if(var1 !=var2)
	{
		printf("var1 is not equal to var2");
		//Below if-else is nested inside another if block
		if(var1>var2)
		{
			printf("\n var1 is greater than var2");
		}
		else
		{
			printf("\n var2 is greater than var1");
		}
	}
	else
	{
		printf("var1 is equal to var2");
	}
	getch();
}