#include <stdio.h>

int main(void) {
	int count=0,i,value;
	printf("enrter the number");
	scanf("%d",&value);
	for(i=2;i<value;i++)
	{
		if(value%i==0)
		{
			count++;
		}
	}
	if(count==0)
	printf("it is a prime number");
	else
	printf("not a prime number");
	return 0;
}
