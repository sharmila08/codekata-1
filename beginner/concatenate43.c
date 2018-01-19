#include <stdio.h>
#include<string.h>

int main(void) {
	char a[1000],a1[1000];
	int i,j,k,s=0;
	printf("enter the string ");
	scanf("%s",a);
	scanf("%s",a1);
	i=strlen(a);
	j=strlen(a1);
	for(k=i;k<i+j;k++)
	{
		a[k]=a1[s];
		s++;
	}
	printf("%s",a);
	
	return 0;
}
