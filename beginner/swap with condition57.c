#include <stdio.h>
int main() {
    long int i ;
    long int j;
    int t;
    scanf("%d%d",&i,&j);
    t=i;
    i=j;
    j=t;
    printf("%d %d", i, j);

    return 0;
}
