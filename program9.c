#include<stdio.h>
int main()
{
int locks, stocks, barrels, total_sales;
int total_locks=0, total_stocks=0,total_barrels=0;
float commission=0;
printf("Enter the number of locks \n");
scanf("%d",&locks);
while( locks !=-1)
{
printf("Enter the number of stocks \n");
scanf("%d",&stocks);
printf("Enter the number of barrelss \n");
 scanf("%d",&barrels);
total_locks = total_locks + locks;
total_stocks = total_stocks + stocks;
total_barrels = total_barrels + barrels;
printf(" \n Enter -1 to end of sale \n Else enter the number of locks\n");
scanf("%d", &locks);
}
if ((total_locks >=0 && total_locks <= 70) && (total_stocks >= 0 && total_stocks <=
80) && (total_barrels >= 0 && total_barrels <= 90))
{
total_sales = (total_locks * 45) + (total_stocks * 30) + (total_barrels * 25);
if (total_sales <= 1000)
{
commission = 0.10 * total_sales;
 }
26. else if (total_sales < 1800)
{
27. commission = 0.10 * 1000;
28. commission = commission + (0.15 * (total_sales - 1000));
29. }
30. else
{
commission = 0.10 * 1000;
commission = commission + (0.15 * 800);
commission = commission + (0.20 * (total_sales - 1800));
}
printf("The total sales is %d \n The commission is %f",total_sales,
commission);
}
else
{
printf("\n Invalid Data \n");
}
}