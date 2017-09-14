#include<stdio.h>
int main()
{
int n,r,sum=0,g,r1,t;
printf("enter the number");
scanf("%d",&g);
while(g!=0)
{
    r1=g%10;
    n=n+r1;
    g=g/10;
}
t=n;
while(n!=0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(sum==t)
printf("the sum is pallindrome");
else
printf("not a pallindronme");
return 0;
}
