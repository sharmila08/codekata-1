#include <stdio.h>

int main(void) {
    int n,a,d,ans,i,total=0;
    printf("enter the values");
    scanf("%d%d%d",&n,&a,&d);
    ans=a;
    for(i=0;i<n;i++)
    {
    	total=total+ans;
    	ans=ans+d;
    }
    printf("%d",total);
	return 0;
}
