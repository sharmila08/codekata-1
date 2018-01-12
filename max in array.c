#include <stdio.h>
void sort(int n,int array[]);
int main(void) {
	int n,array[10],i;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	sort(n,array);
	
	return 0;
}
void sort(int n,int a[])
{int i,max;
max=a[0];
	for(i=1;i<n;i++)
	{
			if(a[i]>max)
	          max=a[i];	
	}
	printf("%d",max);
}
