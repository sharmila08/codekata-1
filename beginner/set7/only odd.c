#include <stdio.h>

int main(void) {
	int value,count=0,r;
	scanf("%d",&value);
	while(value>0)
	{r=value510;
	 if(r%2!=0)
	 printf("%d\t",r);
	 value=value/10;
	}

	return 0;
}
