#include<stdio.h>
 void main()
 {
 int a[20],i,j,n;
 printf("\n QUICKSORT \n");
 printf(" \n Enter the value of n: ");
 scanf("%d", &n);
 printf(“\n The Unsorted elements are: \n”);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 printf("%d\n",a[i]);
 qsort(a,0,n-1);
 printf(" \n SORTED array is: \t");
for(i=0;i<n;i++)
printf(" %d\t", a[i]);
 }
 int qsort(int a[], int l, int r)
 {
 int s;
 if(l<r)
 {
 s=partition(a,l,r);
 qsort(a,l,s-1);
 qsort(a,s+1,r);
 }
 return;
 }
 int partition(int a[], int l, int r)
 {
 int i, j, p;
 p=a[l];
 i= l+1;
 j= r;
 while(i<=j)
{
 while(a[i]<=p)
 i++;
 while(a[j]>p)
 j--;
 swap(&a[i], &a[j]);
 }
swap(&a[i], &a[j]);
 swap(&a[l], &a[j]);
 return j;
 }
 int swap(int *x, int *y)
 {
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
 return;
 }