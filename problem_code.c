#include<stdio.h>
int main()
{
int price, disc, total, buff;
float rate;
int i,j;
scanf("%d %d",&price,&disc);
if(price<=10000 && price>=0 && disc<=100 && disc>=0)
 {
   buff = price;
   total = price;
   rate = disc;
   while(buff>0)
   {
    buff -= buff*(rate/100);
    total += buff;
   }
   printf("%d\n",total);
 }
}
