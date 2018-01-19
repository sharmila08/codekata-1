#include <stdio.h>

int main(void) {
	char a[1000];
	int count=0,i;
	printf("enter the string ");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z');
		else
		count++;
	}
	printf("%d",count);
	
	return 0;
}
