#include <stdio.h>

int main(void) {
    int i,value1,value2,k,r,ans=0,j;
	printf("enter the limits");
	scanf("%d%d",&value1,&value2);
	for(j=value1;j<=value2;j++)
	{
		ans=0;
	k=j;
	while(k>0)
	{
		r=k%10;
		ans=ans+(r*r*r);
		k=k/10;
	}
	if(ans==j)
	printf("%d\t",j);
	}
	return 0;
}
