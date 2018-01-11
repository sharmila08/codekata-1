#include <stdio.h>

int main(void) {
	int a,b,ans;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
            ans=a*b;
            if(ans%2==0)
            printf("even");
            else
            printf("odd");
	return 0;
}
