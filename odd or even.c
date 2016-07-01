#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Given number is :\n");
scanf("%d",&a);
if(a!=0)
  {
   if(a%2==0)
  printf("even number");
  else
  printf("\nodd number");
  }
  else
  printf("you entered zero");
  getch();
  }
