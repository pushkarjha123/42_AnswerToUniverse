#include<stdio.h>

int main() {
  
 int num;
  	printf("Hello World\n Enter a Number to See if You thing for Betterment of Universe\n Enter 1 to quit\n");

	scanf("%d", &num);

	while(1){
		if(num==42)
     			printf ("Bravo ! You found the solution. It is 42. Play Again\n");
               	if((num<42 || num>42) && num!=1)
                        printf("Sorry! Puzzle for Universe is not solved, Try Again Bro\n");
                if(num==1)
		break;
		scanf("%d", &num);
	}
return 0;
}
   

   
