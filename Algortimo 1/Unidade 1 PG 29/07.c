#include<stdio.h>
#include<locale.h>


int main() {
	
	float qtc, alm, fm;
	float fa;
	printf("Quantidade de carro: ");
	scanf("%f", &qtc);
	
	printf("Aluguel mensal por carro: ");
	scanf("%f", &alm);
	
	fm = qtc * alm;
	fa = ((((float)80)/100)*qtc) * alm * 12;
	
	printf("Faturamento mensal: %.1f\n", fm);
	printf("Faturamento mensal: %.1f\n", fa);
}

