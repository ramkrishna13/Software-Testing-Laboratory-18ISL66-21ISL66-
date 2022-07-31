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
printf("Enter the no. of barrels\n");
scanf("%d",&barrels);
totallocks=totallocks+locks;
totalstocks=totalstocks+stocks;
totalbarrels=totalbarrels+barrels;
printf("\nEnter -1 to end of the sales\n Else Enter the number of locks\n");
scanf("%d",&locks);
}
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
printf("The total sales is %d\n The commission is %f",totalsales,commission);
}
else
{
printf("\n Out of Range");
}}
