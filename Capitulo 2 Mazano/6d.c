#include<stdio.h>
#include<locale.h>


int main() {
	
	setlocale(LC_ALL, "");
	
	float tg, vm, d, lt;
	
	printf("Digite o tempo gasto: ");
	scanf("%f", &tg);

	printf("Digite a velocidade m�dia: ");
	scanf("%f", &vm);

	d = tg * vm;
	
	lt = d / 12;
	
	printf("Velocidade m�dia: %.2f\n", vm);
	printf("Tempo gasto: %.2f\n", tg);
	printf("Dist�ncia percorrida: %.2f\n", d);
	printf("Quantidade de litros: %.2f\n", lt);
	
	return 0;
}

