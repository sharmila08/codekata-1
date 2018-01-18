#include <stdio.h>

int main(void) {
	int i,value,ans=1;
	printf("enter the number");
	scanf("%d",&value);
	for(i=value;i>=1;i--)
	ans=ans*i;
	printf("%d",ans);
	return 0;
}
