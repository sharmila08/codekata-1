#include<stdio.h>
void main()
{int a,p,i;
printf("enter the number and power value");
scanf("%d%d",&a,&p);
if(a==1)
{
printf("the value is%d",a);
}
else
{
for(i=2;i<=p;i++)
{
a=a*a};
}
printf("the value is%d",a);
}
}
