#include<stdio.h>
#include<conio.h>
void main()
{
int price=23;
int coin,total=0;
do
{
printf("insert coin");
scanf("%d",&coin);
total=total+coin;
printf("Total amt=%d\n",total);
}
while(total<price);
if(total>price)
printf("extra amt%d\n",total);
printf("product dispensed");
getch();
}