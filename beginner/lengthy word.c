#include <stdio.h>

int main(void) {
	char a[1000],a1[1000];
	int count=0,i;
	printf("enter the string ");
	scanf("%[^\n]s",a);
	printf("enter the string ");
	scanf("%[^\n]s",a1);
	for(i=0;a[i]!='\0';i++)
	{count=0;
		whlile(a[i]!=' '){
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z');
		count++;
	}
	b[j]=count;
	}
	printf("%d",count);
	
	return 0;
}
