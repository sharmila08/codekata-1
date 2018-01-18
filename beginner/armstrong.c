#include <stdio.h>

int main(void) {
    int i,value,k,r,ans=0;
	printf("enter the number");
	scanf("%d",&value);
	k=value;
	while(k>0)
	{
		r=k%10;
		ans=ans+(r*r*r);
		k=k/10;
	}
	if(ans==value)
	printf("yes");
	else
	printf("no");
	return 0;
}
