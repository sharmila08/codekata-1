#include <stdio.h>

int main(void) {
	int n,i,a[100];
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the array of integers in sorted manner");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		printf("%d",i);
	}
	return 0;
}
