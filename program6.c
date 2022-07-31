#include<stdio.h>
#include<stdlib.h>
void main()
{
int day,month,year;
int nextday,nextmonth,nextyear;
printf("\n Enter the date format DD MM YYYY:");
scanf("%d%d%d",&day,&month,&year);
if(day<1||day>31)
printf("\nday is out of range\n");
if(month<1||month>12)
printf("\nMonth is out of range\n");
if(year<1812||year>2012)
printf("\nYear is out of range\n");
if(((day>=1)&&(day<=31))&&((month>=1)&&(month<=12))&&((year>=1812)&&(year<=
2012)))
{
nextmonth=month;
nextyear=year;
if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10))
{
if(day<31)
{
nextday=day+1;
}
else
{
nextday=1;
nextmonth=month+1;
}}
else if((month==4)||(month==6)||(month==9)||(month==11))
{
if(day<30)
nextday=day+1;
else if(day==30)
{
nextday=1;
nextmonth=month+1;
}
else
{
printf("invalid");
exit(0);}
}
else if(month==12)
{
if(day<31)
nextday=day+1;
else
{
nextday=1;
nextmonth=1;
nextyear=year+1;
if(nextyear>2012)
{
printf("Invalid");
exit(0);
}}}
else
{
if((year%4==0&&year%100!=0)||(year%400==0))
{
if(day<29)
nextday=day+1;
else if(day==29)
{
nextday=1;
nextmonth=month+1;
}
else
{
printf("Invalid date");
exit(0);
}}
else
{
if(day<28)
nextday=day+1;
else if(day==28)
{
nextday=1;
nextmonth=month+1;
}
else
{printf("Invalid date");
exit(0);
}}}
printf("\nThe next date is = %d %d %d",nextday,nextmonth,nextyear);
}}