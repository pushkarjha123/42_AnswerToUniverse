#include<stdio.h>


int main(){

int n,m,a[100],b[100],i=0;
int S=0,Q=0;

scanf("%d",&n);
for(i=0;i<n;i++)
{ scanf("%d", &a[i]);
  S+=a[i];}

scanf("%d",&m);
for(i=0;i<m;i++)
{scanf("%d", &b[i]); Q+=b[i];}

if((Q)<(S))
{for(i=0;i<n;i++) printf("%d ",a[i]);}
else
{for(i=0;i<m;i++) printf("%d ",b[i]);}
return 0;
}