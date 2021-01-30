#include<stdio.h>

int main() {
	
	int num = 0, maior = 0, menor=0, soma = 0, cont = 0;
	float media;
	scanf("%d", &num);
	
	menor = num;
	maior = num;
	while(num >= 0) {
		
		if (num > maior) {
			
			maior = num;
		}
		
		if (num < menor) {
			
			menor = num;
		}
		
		soma = soma + num;
		cont = cont + 1;
		media = soma/cont;
		
		scanf("%d", &num);	
	}
	
	printf("Maior valor: %d\n", maior);
	printf("Menor valor: %d\n", menor);
	printf("Quantidde de numeros: %d\n", cont);
	printf("Soma dos valores: %d\n", soma);
	printf("Media dos valores: %.2f\n", media);
	return 0;
}
