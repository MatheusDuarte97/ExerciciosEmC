#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
struct produtos {
	
	int code;
	char nome[50];
	float preco;
	int qtdProdutos;
	char desc[100];
	
	
} ;


int main() {
	setlocale(LC_ALL,"");
	int tam=20;
	struct produtos cad[tam];
	int i,busca,codigo,encontrado;
	
	for(i=0;i<tam;i++) {
		printf("Codigo: ");
		scanf("%d", &cad[i].code);
		fflush(stdin);
		printf("Nome do produto: ");
		scanf("%s", cad[i].nome);
		fflush(stdin);
		printf("Preço: ");
		scanf("%f", &cad[i].preco);
		fflush(stdin);
		printf("Quant. em estoque: ");
		scanf("%d", &cad[i].qtdProdutos);
		fflush(stdin);
		printf("Descrição: ");
		gets(cad[i].desc);
		fflush(stdin);	
		system("cls");
	}
	
	
	
	printf("Pesquisar: ");
	scanf("%d", &busca);
	fflush(stdin);
	while(busca != 0) {
		encontrado = 0;
		for(i=0;i<tam;i++) {
		
		if (cad[i].code == busca) {
			codigo = cad[i].code;
			encontrado = 1;
			break;
		}
		
		}
			int j;
		if (encontrado == 1) {
			printf("Produto encontrado:\n");
			printf("Codigo: %d\n", codigo);
		for(j=0;j<encontrado;j++) {
			printf("Nome: %s\n", cad[i].nome);
			printf("Preco: R$%.2f\n", cad[i].preco);
			printf("Quant. Estoque: %d\n", cad[i].qtdProdutos);
			printf("Descrição: %s\n", cad[i].desc);
		}
	} else {
		
		printf("Esse codigo de produto não foi cadastrado!\n");
	}
		printf("Pesquisar: ");
		scanf("%d", &busca);
		fflush(stdin);
		system("cls");
	}


	
	return 0;
	

}



