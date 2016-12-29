#include <stdio.h>
#include<iostream>
#include<string>
using namespace std;

int kmp_fail(std::string &s, long length){
	
	long table[length];
	long j=0,i=1;
	table[0]=0;
	while(i<=length){
		
		if(s[j]==s[i])
		{table[i]=j+1;j++;i++;}
		else{
			if(j!=0)
			{j=table[j-1];}
			else
			{table[i]=0;
			i++;}
		}
	}

if(length%(length-table[length-1])==0)
printf("%ld\n",length/(length-table[length-1]));
else
printf("1\n");

return 0;	
	
	}

int main(void) {

while(1){
string s;
cin>>s;
if(s[0]=='*')
break;
long length=s.length();
kmp_fail(s,length);
}

  return 0;
}
