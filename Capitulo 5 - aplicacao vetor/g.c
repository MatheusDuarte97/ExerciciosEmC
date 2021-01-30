#include<stdio.h>
#include <math.h>
#include<math.h>

int main() {
	int tam=8;
	int a[] = {1,2,3,4,5,6,7,8};
	int b[tam];
	int i,acho=0,meio=0;
	
	for(i=0;i<tam;i++) {
		b[i] = a[i];
	}
	
	for(i=0;i<tam;i++) {
		printf("%d - ", b[i]);
	}
	int aux, j;
	for(i=0;i<tam;i++) {
		for(j=i+1;j<tam;j++) {
			if (b[i] < b[j]) {
				aux = b[j];
				b[j] = b[i];
				b[i] = aux;
			} 
		}
	}	
	int busca;
	scanf("%d", &busca);
	
	meio = (tam-1)/2; // 3-1 = 2 / 2 = 1
	for(i=0;i<tam;i++) { // 0 < 6
		
		if (busca == b[meio]) {
			
			acho = 1;
			break;
		} else if (busca > b[meio]) { // {5,6,9} 9 
			i = meio + 1;
			meio = (i+tam)/2;
		}
		
	
	}
	
	if (acho) {
		printf("oi");
	}
	
	
	return 0;
}
