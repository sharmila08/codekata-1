#include<stdio.h>
void main()
{
int n;
printf("enter the year");
scanf("%d",&n);
if(n%4==0&&n!=100)
printf("the given year is leap year");
else
printf("the given year is not a leap year");
}
