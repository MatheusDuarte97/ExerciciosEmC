#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	float hr, inss, num, salbruto, saliquido;
	
	printf("Valor hora aula: ");
	scanf("%f", &hr);
	printf("Numero de aulas mes: ");
	scanf("%f", &num);
	
	printf("desconto INSS: ");
	scanf("%f", &inss);
	
	salbruto = hr * num;
	saliquido = salbruto - salbruto*(inss/100);
	
	printf("Salario bruto: %.2f\n", salbruto);
	printf("Salario liquido: %.2f\n", saliquido);
}

