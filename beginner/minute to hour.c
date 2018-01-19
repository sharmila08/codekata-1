#include <stdio.h>

int main(void) {
	int hour,minute,min;
	printf("enter the hour");
	scanf("%d",&minute);
	hour=minute/60;
	min=minute%60;
	printf("%d %d",hour,min);
	return 0;
}
