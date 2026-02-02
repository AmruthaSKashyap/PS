#include<stdio.h>
#include<conio.h>
void main()
{
int num,digit;
int even=0,odd=0,i;
clrscr();
printf("enter 4 digit number");
scanf("%d",&num);
if(num<1000 || num>9999)
{
printf("invalid input");
return;
}
for(i=0;i<=3;i++)
{
digit=num%10;
if(digit%2==0)
even++;
else
odd++;
num=num/10;
}
printf("even digits=%d\n",even);
printf("odd digits=%d\n",odd);
getch();
}



