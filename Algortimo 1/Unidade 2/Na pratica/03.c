#include<stdio.h>


int main() {
	
	int a,b,c,d,e, cont = 0;
	
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	if (a < 0) {
		cont = cont + 1;
	}
	if (b < 0) {
		cont = cont +1;
		
	}
	
	if (c < 0) {
		cont = cont + 1;
	}
	
	if (d < 0) {
		cont = cont + 1;
	}
	
	if (e < 0) {
		
		cont++;
	}
	
	printf("Quantidade: %d", cont);
	
	return 0;
	
}
