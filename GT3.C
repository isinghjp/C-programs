#include<stdio.h>
#include<conio.h>
void main()
{
   int age;
   clrscr();
   g: //label name
     printf("you are Eligible\n");
   s: //label name
     printf("you are not Eligible");

   printf("Enter you age:");
   scanf("%d", &age);
   if(age>=18)
	goto g; //goto label g
   else
	goto s; //goto label s
getch();
}


