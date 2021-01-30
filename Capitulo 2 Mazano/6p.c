#include<stdio.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	float sm, pr, ns;
	
	printf("Salario mensal: ");
	scanf("%f", &sm);
	printf("Reajuste: ");
	scanf("%f", &pr);
	
	ns = ((pr/100)*sm) + sm;
	
	printf("Novo salario: %.2f\n", ns);
}
