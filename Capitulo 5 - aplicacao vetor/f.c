#include<stdio.h>
#include <math.h>
#include<math.h>

int main() {
	int tam=4;
	int a[] = {2,5,4,7};
	int b[tam];
	int i;
	
	
	for(i=0;i<tam;i++) {
		b[i] = pow(a[i],3);
	}
	
	for(i=0;i<tam;i++) {
		printf("%d - ", b[i]);
	}
	int busca;
	int acho = 0;
	printf("Buscar: ");
	scanf("%d", &busca);
	
	for(i=0;i<tam;i++) {
		if (b[i] == busca) {
			acho = 1;
			break;
		} 
	}
	
	if(acho == 1) {
		printf("Elemento %d Posicao %d", b[i], i);
	} else {
		printf("Elemento nao encontrado");
	}
	
	return 0;
}
