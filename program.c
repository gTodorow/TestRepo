#include <stdio.h>

 int main(){
 	int a,b,c,P;
 	printf("a = ");
 	scanf("%d", &a);
 	printf("b = ");
 	scanf("%d", &b);
 	printf("c = ");
 	scanf("%d", &c);	
 
 	if (a > 0 && b>0 && c>00 && (a + c) > b &&
 	   (a + b) > c && (b + c) > a){
 			P = a + b + c;
 			printf("P = %d\n", P);
 		}else{
 			printf("Invalid triangle");
 		}

 }
