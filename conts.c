//continue statement
// Program to calculate sum of maximum of 10 numbers
// Negative numbers are skipped from calculation

#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    double number, sum=0.0;
    clrscr();
    for(i=1; i<= 10; ++i)
    {
        printf("Enter a n%d: ",i);
        scanf("%lf",&number);

        // If user enters negative number, loop is terminated
        if(number<0.0)
        {
            continue;
        }

        sum +=number; // sum = sum + number;
    }

    printf("Sum = %.2lf",sum);
    
    getch();
}
