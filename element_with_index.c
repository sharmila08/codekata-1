#include <stdio.h>

int main(void) {
    int num,a[1000],i,t,j;
    printf("enter total numbers");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
       printf("%d %d\n",a[i],i);
        }



	return 0;
}
