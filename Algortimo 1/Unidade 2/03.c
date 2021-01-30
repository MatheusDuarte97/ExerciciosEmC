#include<stdio.h>
#include<math.h>

int main() {
	
	float peso, altura, imc;
	
	scanf("%f", &peso);
	scanf("%f", &altura);
	
	imc = peso / pow(altura, 2);
	
	if (imc < 20) {
		printf("Abaixo do peso");
	} else if ((imc >= 20) && (imc <= 25)) {
		printf("Normal");
	} else if ((imc >= 26) && (imc <= 30)) {
		printf("excesso de peso");
	} else if ((imc >= 31) && (imc <= 35)) {
		printf("Obesidade");
		
	} else if (imc > 35) {
		printf("obesidade morbida");
	}
	
	return 0;
	
}
