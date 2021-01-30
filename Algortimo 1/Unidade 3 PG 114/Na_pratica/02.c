#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int contNum=0, contPar=0, contImpar=0, num=0;
	float media=0, soma=0;
	scanf("%d", &num);
	
	while (num != 0) {
		if (num != 0) {
			contNum = contNum + 1;
		}
		if (num % 2 == 0 ) {
			contPar = contPar + 1;
		} else {
			contImpar = contImpar + 1;
		}
		
		soma = soma + num;
		media = soma / contNum;
		
		scanf("%d", &num);
	}
	
	printf("Numeros de valores lidos: %d\n", contNum);
	printf("Numeros de valores pares %d\n", contPar);
	printf("Numero de valores impares: %d\n", contImpar);
	printf("Media: %.2f\n", media);
}
