#include <stdio.h>

int main(void) {
    int a[100],n,i,j,count=0;
    printf("enter the number of elements");
    scanf("%d",&n);
	printf("enter the array of numbers");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{count=0;
	    for(j=0;j<n;j++)
	    {
	        if(a[i]==a[j])
	        {
	            count++;
	        }
	    }
	    if(count==1)
	    printf("the unique value is %d",a[i]);
	}
	return 0;
}

