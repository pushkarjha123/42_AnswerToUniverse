#include <stdio.h>

int main(void) {
	// your code goes here
	int a,sum=0;
	scanf("%d",&a);
	
	if(a==0)
	{printf("0\n");return 0;}
	
	
	if(a==1)
	{printf("1\n");return 0;}
	
	
	if(a==2)
	{printf("2\n");return 0;}
	
	while(a%2==0)
	{
		sum=sum+2;
		a=a/2;
	}
	
	printf("%d\n",sum);
	
	sum=0;
	
	
	return 0;
}
