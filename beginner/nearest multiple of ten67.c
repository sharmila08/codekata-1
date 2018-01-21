#include <stdio.h>

int main(void) {
    long int k,r,ans;
	printf("enter the number");
	scanf("%d",&k);
		r=k%10;
		ans=k+(10-r);
    printf("%d",ans);
	return 0;
}
