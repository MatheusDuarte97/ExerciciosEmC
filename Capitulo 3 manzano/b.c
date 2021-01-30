#include<stdio.h>


int main() {
	
	int a;
	scanf("%d", &a);
	
	if (a < 0) {
		
		printf("Valor: %d", a*(-1));
	} else {
		printf("Valor: %d", a);
	}
	
	return 0;
	
}
