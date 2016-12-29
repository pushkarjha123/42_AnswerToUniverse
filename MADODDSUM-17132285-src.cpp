#include<stdio.h>
using namespace std;


int main(){

long long a,b,sum;
scanf("%lld%lld",&a,&b);

if(a%2==0)
a++;
if(b%2==0)
b--;
long long element=((b-a)/2)+1;
 sum=(element*(a+b))/2;

printf("%lld\n",sum);

return 0;
}