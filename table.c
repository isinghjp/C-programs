// Program to print table of any given number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i;
    clrscr();
    printf("Enter an integer: ");
    scanf("%d",&n);

    for(i=1; i<=10; ++i)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
    
    getch();
}