#include <stdio.h>

int main(void) {
	int i,value;
	printf("enter the number");
	scanf("%d",&value);
	for(i=1;i<6;i++)
	printf("%d\t",value*i);
	return 0;
}
