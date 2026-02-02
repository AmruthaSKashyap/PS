#include<stdio.h>
#include<conio.h>
void main()
{
int units=0;
float bill=0,surcharge=0;
clrscr();
printf("enter units");
scanf("%d",&units);
if(units<=100)
{
bill=units*1;
}
else if(units<=300)
{
bill=units*1.5;
}
else
{
bill=units*2;
}
if(bill>500)
{
surcharge=bill*0.05;
bill=bill+surcharge;
}
printf("Total %f",bill);
getch();
}