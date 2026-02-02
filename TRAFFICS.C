#include<stdio.h>
#include<conio.h>
void main()
{
int cycle,i,signal;
int vehicles=0;
clrscr();
printf("enter number of signal cycles\n");
scanf("%d",&cycle);
for(i=1;i<=cycle;i++)
{
printf("cycle%d",i);
printf(" 1.Red \n 2.Yellow \n 3.Green");
printf("enter signal\n");
scanf("%d",&signal);
switch(signal)
{
case 1:vehicles=vehicles+0;
      break;
case 2:vehicles=vehicles+2;
      break;
case 3:vehicles=vehicles+5;
      break;
default:printf("invalid");
}
}
printf("total vehicles passes %d",vehicles);
getch();
}