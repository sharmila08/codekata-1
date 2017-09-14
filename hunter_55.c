#include <stdio.h>

int main(void) {
	int a[10000],i,b=1,c,n,k,p;
	printf("enter the number of values and the key");
	scanf("%d%d",&n,&k);
	c=n;
  p=k;
	for(i=n;i>k+1;i--)
	{
	a[i]=p;
	p--;
    }
    for(i=k+1;i>=1;i--)
    {
        a[i]=c;
        c--;
    }
    for(i=1;i<=n;i++)
    {
    printf("%d",a[i]);
    }
	return 0;
}
