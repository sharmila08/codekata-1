#include<stdio.h>
#include<conio.h>
void main()
{
int i;
printf("enter the number");
scanf("%d",i);
if(i<0)
{
printf("num is negative");
}
else if(i>0)
{
printf("num is positive");
}
else if(i==0)
{
printf("num is zero");
}
else
{
printf("not a num... invalid");
}
getch();
}
