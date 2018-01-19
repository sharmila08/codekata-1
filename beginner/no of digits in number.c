#include <stdio.h>

int main(void) {
	int value,count=0,r;
	scanf("%d",&value);
	while(value>0)
	{
		r=value%10;
		value=value/10;
		count++;
	}
	printf("%d",count);
	return 0;
}
