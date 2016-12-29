#include<stdio.h>
using namespace std;

int main(){

int n,m,a[100],b[100],i=0,j=0;

scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d", &a[i]);

scanf("%d",&m);
for(i=0;i<m;i++)
scanf("%d", &b[i]);
i=0;
if(n<m)
{for(i=0;i<n;i++)
if(a[i]==b[i]) printf("%d ",i+1);
}

if(m<n)
{for(i=0;i<m;i++)
if(b[i]==a[i])printf("%d ",i+1);
}

return 0;
}