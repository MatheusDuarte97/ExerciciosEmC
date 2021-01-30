#include<stdio.h>


int main() {
	
	int a;
 	
 	scanf("%d", &a);
 	
 	
 	if ((a % 3 == 0) && (a % 7 == 0)) {
 		printf("E divisivel");
	 } else {
	 	printf("Nao e divisivel");
	 }
 	
 	
  
	return 0;
	
}
