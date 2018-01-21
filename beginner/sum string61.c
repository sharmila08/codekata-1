#include <stdio.h>

int main(void) {
  char name[1000];
  int n,i;
  scanf("%s",name);
  scanf("%d",&n);
  for(i=0;i<n;i++)
  printf("%c",name[i]);
	return 0;
}
