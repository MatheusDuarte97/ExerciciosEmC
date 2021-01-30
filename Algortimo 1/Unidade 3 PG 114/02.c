#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


int main() {
	setlocale(LC_ALL, "");

	int qp, code,cont,ap,rep;
	float notas, soma, media;
	
	printf("Quantidade de Provas: ");
	scanf("%d", &qp);
	
	printf("Codigo: ");
	scanf("%d", &code);
	
	ap = 0;
	rep = 0;
	while(code != 0) {
		soma = 0;
		notas = 0;
		cont = 1;
		while(cont <= qp) {
			printf("Insira a nota: ");
			scanf("%f", &notas);
			fflush(stdin); // Limpeza de buffer
			soma = soma + notas;
			cont = cont + 1;
		}
		media = soma / qp;
		
		
		if (media >= 7) {
			ap = ap + 1;
		} else {
			rep = rep + 1;
		}
		
	printf("Codigo: ");
	scanf("%d", &code);	
	fflush(stdin);	
	}

	printf("Aprovados: %d\n", ap);
	printf("Reprovados: %d\n", rep);
	
	system("pause");
	return 0;
}
