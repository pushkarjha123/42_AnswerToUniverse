#include <cstdio>
long array[38]={2, 4, 9, 16, 25, 64, 289, 729, 1681, 2401, 3481, 4096, 5041, 7921, 10201, 15625, 17161, 27889, 28561, 29929, 65536, 83521, 85849, 146689, 262144, 279841, 458329, 491401, 531441, 552049, 579121, 597529, 683929, 703921, 707281, 734449, 829921, 1190281};
using namespace std;

int main() {
	// your code goes here
	int  test,i,count1=0,count2=0;
	long a,b;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%ld%ld",&a,&b);
		for(i=0;array[i]<=(a-1);i++)
		{
		 count1++;	
		}
		
		for(i=0;array[i]<=b;i++)
		{count2++;}
		printf("%d\n",count2-count1);
		count1=0;
		count2=0;
	}
	return 0;
}