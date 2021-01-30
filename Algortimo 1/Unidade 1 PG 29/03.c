#include<stdio.h>
#include<locale.h>
int main() {

	setlocale(LC_ALL, "");
	
	float vh,saliquido, fgts, inss, ht, hextra, salbruto;
	
	printf("Horas trabalhadas: ");
	scanf("%f", &ht);
	
	printf("Horas Extras: ");
	scanf("%f", &hextra);
	
	printf("Valor hora trabalhada: ");
	scanf("%f", &vh);
	
	salbruto = (ht+hextra*(1+100/100)) * vh;
	
	inss = salbruto*(9/100);
	fgts = salbruto*(8/100);
	saliquido = salbruto - inss;
	
	printf("Salário bruto: %.2f\n", salbruto);
	printf("Inss: %.2f\n", inss);
	printf("FGTS: %.2f\n", fgts);
	printf("Salario liquido: %.2f\n", saliquido);
	return 0;
}
