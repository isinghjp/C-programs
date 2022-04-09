#include<stdio.h>
#include<conio.h>
void main()
    {
	int a = 1, b = 1, d = 1;
	clrscr();
	printf("%d\n %d\n %d\n", ++a + ++a + a++, a++ + ++b, ++d + d++ + a++);
	getch();
    }