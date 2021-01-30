#include<stdio.h>
#include <math.h>


int main() {
	
	int tam=5;
	
	int a[tam];
	int b[tam];
	int i,j,aux=0;
	int busca,meio;
	for(i=0;i<tam;i++) {
		scanf("%d", &a[i]);	
		b[i] = a[i];
	}
	

	
	for(i=0;i<tam;i++) {
		for(j=i+1;j<tam;j++) {
			
			if (a[i] > b[j]) {
				
				aux = b[j];
				
				b[j] = b[i];
				
				b[i] = aux;
			}
			
		}
	}
	int acho=0;
	printf("Buscar: ");
	scanf("%d", &busca);
	
	for(i=0;i<tam;i++) {
		meio = tam/2;
		if (a[meio] == busca){	
			acho = a[meio];
			break;
		}
	}
	
	
	if (acho) {
		printf("Elemento %d posicao %d", acho, i);
	} else {
		printf("Elemento nao existe!");
	}
	
	
	return 0;
}
