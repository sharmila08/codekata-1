#include <stdio.h>

int main(void) {
	int number;
	scanf("%d",&number);
	if(number%2==0)
	printf("%d",number);
	else
	printf("%d",number-1);
	return 0;
}
