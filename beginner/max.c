#include <stdio.h>

int main(void) {
	int i,a[1000],max,limit;
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<limit;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("%d",max);
	return 0;
}
