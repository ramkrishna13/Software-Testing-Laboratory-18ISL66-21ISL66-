#include<stdio.h>
void main()
{
int locks,stocks,barrels,totalsales;
int totallocks=0,totalstocks=0,totalbarrels=0;
float commission=0;
printf("Enter the number of locks\n");
scanf("%d",&locks);
while(locks!=-1)
{
printf("Enter the no. of stocks\n");
scanf("%d",&stocks);
printf("Enter the no. of barrels");
scanf("%d",&barrels);
totallocks=totallocks+locks;
totalstocks=totalstocks+stocks;
totalbarrels=totalbarrels+barrels;
printf("\nenter number of locks or -1 for end of sale");
scanf("%d",&locks);
}
if(totallocks<-1 ||totallocks>70)
printf("\nLock is out of range\n");
if(totalstocks<0 || totalstocks>80)
printf("\nStock is out of range\n");
if(totalbarrels<0 ||totalbarrels>90)
printf("\nBarrel is out of range\n");
if((totallocks>=0&&totallocks<=70)&&(totalstocks>=0&&totalstocks<=80)&&(totalbarrels
>=0&&totalbarrels<=90))
{
totalsales=(totallocks*45)+(totalstocks*30)+(totalbarrels*25);
if(totalsales<=1000)
{
commission=0.10*totalsales;
}
else if(totalsales<1800)
{
commission=0.10*1000;
commission=commission+(0.15*(totalsales-1000));
}
else
{
commission=0.10*1000;
commission=commission+(0.15*800);
commission=commission+(0.20*(totalsales-1800));
}
printf("\nThe total sales is %d\n The commission is %f",totalsales,commission);
}
}
