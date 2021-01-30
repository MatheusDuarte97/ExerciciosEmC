#include<stdio.h>
#include<locale.h>
#include<string.h>
int main() {
	
	setlocale(LC_ALL,"");
	
	char nome[30], maiorQT[30],menorQT[30];
	int qp=0, qe=0, i, maior=0, menorT;
	
	printf("Informe a quantidade de produtos: ");
	scanf("%d", &qp);
	
	for (i=1; i<=qp; i++) {
		printf("Nome do produto: ");
		scanf("%s", nome);
		
		printf("Quantidade em esotque: ");
		scanf("%d", &qe);
		
		if (qe <= 30) {
			menorT = qe;
			strncpy(menorQT, nome, 30);
		}
		
		if(qe > maior) {
			
			maior = qe;
			
			strncpy(maiorQT, nome, 30);
		}
	}
	
	printf("Produto com maior quantidade em estoque\n");
	printf("Produto: %s\n", maiorQT);
	printf("Quantidade em estoque: %d\n", maior);
	printf("Estoque menor que 30\n");
	printf("Produto: %s\n", menorQT);
	printf("Quantidade em estoque: %d", menorT);
	 return 0;
	
}
