#include<stdio.h>
#include<locale.h>

int main() {
	
	int num = 10;
	int cont = 1;
	int p=0, im=0;
	for(cont=1;cont<=num;cont++) {
		
		if(cont % 2 == 0) {
		
			p = p + 1;
		} else {
			
			im = im + 1;
		}
		
	}	
	
	printf("Pares: %d\n", p);
	printf("Impares: %d\n", im);
	
}
