#include<stdio.h>
#include<conio.h>
void main()
{
int n,m;
int a,b;
clrscr();
printf("enter n and m");
scanf("%d%d",&n,&m);
a=(n/m)*m;
b=a+m;
if(abs(n-a)<abs(n-b))
printf("closest number=%d",a);
else if(abs(n-b)<abs(n-a))
printf("closest number=%d",b);
else
{
if(abs(a)>abs(b))
printf("closest number=%d",a);
else
printf("closest number=%d",b);
}
getch();
}
