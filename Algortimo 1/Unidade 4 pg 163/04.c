#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>

	
struct agenda {
	
	char nome[40];
	char tel[20];
	char email[50];
	
};


int main() {
	setlocale(LC_ALL,"");
	int tam=20;
	char busca[40];
	struct agenda cad[tam];
	int i,encontrado=0;
	
	for(i=0;i<tam;i++) {
		printf("Nome: ");
		gets(cad[i].nome);
		printf("Número: ");
		gets(cad[i].tel);
		printf("Email: ");
		gets(cad[i].email);
		
	}
	system("cls");
	
	printf("Pesquisar Contato: ");
	gets(busca);

	while(!(strcmp(busca, "sair") == 0)) {
		encontrado = 0;
		for(i=0;i<tam;i++) {
		
			if (strcmp(busca, cad[i].nome) == 0) {
					encontrado = 1;
					break;
			} else {
				printf("Usuario inexistente!\n");
			}
		} 
		int j=0;
		if (encontrado == 1) {
		
			for(j=0;j<tam;j++) {
				printf("Nome: %s\n", cad[i].nome);
				printf("Telefone: %s\n", cad[i].tel);
			}
		}
	printf("Pesquisar Contato: ");
	gets(busca);
	fflush(stdin);		
	}
	
	return 0;
	

}



