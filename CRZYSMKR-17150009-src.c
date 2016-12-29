#include <stdio.h>

int main(void) {
int i,z,t;
  long long n;
  scanf("%d",&t);
	for(i=0;i<t;i++)
{
	
  scanf("%lld",&n);
	z=(1 + (8*(n%11))%11 + 10)%11;
	if(z!=0)
	printf("%d\n",11-z);
	else
	printf("0\n");
}
	return 0;
}
