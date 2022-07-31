#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b,c;
printf("\n Enter 3 integer which are side of triangle \n");
scanf("%d %d %d",&a,&b,&c);
if(a<1||a>10)
printf("a is out of range\n");
if(b<1 ||b>10)
printf("b is out of range\n");
if(c<1||c>10)
printf("c is out of range");
if((a>=1&&a<=10)&&(b>=1&&b<=10)&&(c>=1&&c<=10))
{
if((a<(b+c))&&(b<(a+c))&&(c<(a+b)))
{
if((a==b)&&(b==c))
printf("Triangle is equilateral");
else if((a!=b)&&(a!=c)&&(b!=c))
printf("Triangle is scalene\n");
else
printf("Triangle is isoceles\n");
}
else
printf("\n Triangle does not formed");
}}