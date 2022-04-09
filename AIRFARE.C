#include<stdio.h>
#include<conio.h>
void main()
{
    int age, fare=2000;
    clrscr();
    printf("please enter the age of the passenger : ");
    scanf("%d",&age);
    if(age<14)
    {
	fare=(fare*50)/100;
	printf("air ticket after discount is : %d \n");
    }
    if(age>50)
    {
	fare=(fare*20)/100;
	printf("air ticker after discount is : %d \n");
    }
    if(age>14 && age<50)
    {
	fare=(fare*10)/100;
	printf("air ticket after discount is : %d \n");
    }
    printf("the air ticket fare is : %d",fare);
    getch();
}
