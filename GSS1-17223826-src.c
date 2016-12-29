#include<stdio.h>
#define MAX 50006
typedef struct tree tree;
struct tree{
 int lt,rt,total,max;
 };
 
 tree segment[300006];
 int input[50001];
 
int maximum(int a, int b){
return a>b?a:b;
} 
 void buildsegment(int present, int a, int b){
  
  if(a>b) return; // first index is greater than last index
 if(a==b) // leaf nodes assignment in segment tree
 { 	segment[present].lt=input[a];
	segment[present].rt=input[a];
	segment[present].total=input[a];
	segment[present].max=input[a];
	return;
 }
 buildsegment(2*present, a,(a+b)/2); 
 buildsegment(2*present+1, (a+b)/2+1,b);
                                 
 segment[present].total= segment[2*present].total + segment[2*present+1].total;
 segment[present].lt = maximum(segment[2*present].lt, segment[2*present].total + segment[2*present+1].lt);
 segment[present].rt = maximum(segment[2*present+1].rt, segment[2*present+1].total+segment[2*present].rt);
 segment[present].max=maximum(segment[present].lt, maximum(segment[present].rt, maximum(segment[2*present].max, maximum(segment[2*present+1].max,segment[2*present+1].lt+segment[2*present].rt))));

 }
 tree max_query(int present,int first_index,int total_element_number, int left_interval,int right_interval){
 
	   if(first_index>total_element_number || first_index>right_interval || total_element_number<left_interval)
	 {
		tree t;
		t.total=0;
		t.lt=-750350001;
		t.rt=-750350001;
		t.max=-750350001;
		return t;
	 }
	if(first_index>=left_interval && total_element_number <=right_interval)
	  return segment[present];
	  
	  tree query1=max_query(2*present,first_index,(first_index + total_element_number)/2,left_interval,right_interval);
	  tree query2=max_query(2*present+1,((first_index + total_element_number)/2)+1,total_element_number,left_interval,right_interval);
	  tree result;
	  result.total=query1.total + query2.total;
	  result.lt=maximum(query1.lt,query1.total+query2.lt);
	  result.rt=maximum(query2.rt, query2.total+query1.rt);
	  result.max=maximum(result.lt,maximum(result.rt,maximum(query1.max,maximum(query2.max,query1.rt+query2.lt))));
	 
	 return result;
 
 }
  int main(){
  int n,i,m,x,y;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  scanf("%d",&input[i]);
  buildsegment(1,1,n);
   scanf("%d",&m);
  while(m--)
  {
  scanf("%d%d",&x,&y);
  tree result=max_query(1,1,n,x,y); 
  printf("%d\n",result.max);  
  }
  
 return 0;
 }