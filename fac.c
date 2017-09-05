#include<stdio.h>
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n==1)
{
printf("the factorial is 1");
}
else
{
while(n!=0)
{
num=n*(n-1);
n--;}
printf("the factorial is %d",num);
}
}
}
