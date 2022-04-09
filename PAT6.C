//Number pattern 3
#include<stdio.h>
#include<stdio.h>
void main()
{
  int n, i, j;
  clrscr();
  printf("Enter number of rows: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=n; j++)
    {
      if(j < i)
      printf(" "); // space
      else
      printf("*"); // star
    }
    printf("\n"); // new line
  }
  getch();
}