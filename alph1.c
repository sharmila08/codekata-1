#include<stdio.h>
void main()
{
char a1;
printf("enter the character");
scanf("%c",&a1);
if((a1>='a'&&a1<='z')||(a1>='A'&&a1<='Z'))
printf("it is an alphabet");
else
printf("not an alphabet");
}
