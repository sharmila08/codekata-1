#include <stdio.h>

int main(void) {
	int a[10000],i,b=1,c,n,k;
	printf("enter the number of values and the key");
	scanf("%d%d",&n,&k);
	c=n;
	for(i=k+1;i<=n;i++)
	{
	a[i]=b;
	b++;
    }
    for(i=k;i>=1;i--)
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
