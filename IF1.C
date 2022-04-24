// Program to display a number if user enters positive number
// If user enters negative number, that number won't be displayed
#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    clrscr();
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Test expression is true if number is less than 0
    if(number>0)
    {
	printf("You entered %d \n", number);
    }

    printf("The if statement is easy.");
    getch();
}