#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter three sides");
scanf("%d %d %d",&a,&b,&c);
if(a+b>c && a+c>c && b+c>a)
{
printf("valid");
}
else
{
printf("invalid");
}
getch();
}