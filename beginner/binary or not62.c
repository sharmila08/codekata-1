#include <stdio.h>

int main(void) {
	int num,rem,count=0,count1=0;
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		count++;
		if(rem==1||rem==0)
		count1++;
		num=num/10;
	}
	if(count==count1)
	printf("yes");
	else
	printf("no");
	return 0;
}
