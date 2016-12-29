#include <stdio.h>

int main(void) {
	
	int t,i,x,y,z;
	long long n;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		
		  x=n/3; y=n%3;z=x%2;
		  
		  if(z==1 && y==1)
		  printf("5\n");
		  if(z==1 && y==2)
		  printf("2\n");
		  if(z==0 && y==0)
		  printf("0\n");
		  
		   if(z==0 && y==1)
		  printf("1\n");
		  if(z==0 && y==2)
		  printf("4\n");
		  if(z==1 && y==0)
		  printf("6\n");
		  
		 x=0;y=0;z=0;
	}
	
	return 0;
}
