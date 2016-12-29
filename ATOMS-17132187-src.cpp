#include<stdio.h>
using namespace std;

int main(){
  int p;
long long  n,k,m,result,t=0;
scanf("%d",&p);
for(int i=0;i<p;i++)
{ scanf("%lld%lld%lld",&n,&k,&m);
//n=n*k;
        while(n<=(m/k))
                {
                        t++;n=n*k;//printf("%lld %lld\n",t,n);
                }
printf("%lld\n",t);
t=0,n=0,m=0;
}
return 0;
}
