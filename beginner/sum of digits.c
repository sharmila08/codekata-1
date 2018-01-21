#include <stdio.h>

int main(void) {
	int sum=0,number,rem;
	scanf("%d",&number);
	while(number>0)
	{
		rem=number%10;
		sum=sum+rem;
		number=number/10;
	}
	printf("%d",sum);
	return 0;
}
