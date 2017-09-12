
#include <stdio.h>

int main()
{
	int n,f=0,s=1,t;
	printf("enter the number of value");
	scanf("%d",&n);
	printf("%d %d",f,s);
	while(n>0)
	{
	  t=s+f;
	  f=s;
	  s=t;
	  printf("%d",t);
	  n--;
	}



    return 0;
}

