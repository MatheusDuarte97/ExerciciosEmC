#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>

	
struct professor {
	
	int mat;
	char nome[40];
	char lotacao[30];
	float salario;
	
};


int main() {
	setlocale(LC_ALL,"");
	int tam=2;
	int encontrado=0;
	int i,busca;
	struct professor cad[tam];
	
	for(i=0;i<tam;i++) {
		printf("Matricula: ");
		scanf("%d", &cad[i].mat);
		fflush(stdin);
		printf("Nome: ");
		gets(cad[i].nome);	
		fflush(stdin);
		printf("Lotação: ");
		gets(cad[i].lotacao);
		fflush(stdin);
		printf("Salario: ");
		scanf("%f", &cad[i].salario);
		fflush(stdin);	
	}
	
	
	printf("Consultar: ");
	scanf("%d", &busca);
	int j=0;
	while(busca != 0) {
		encontrado = 0;
		for (i=0;i<tam;i++) {
			if (cad[i].mat == busca) {
				encontrado = 1;
				break;
			} 
		}
		
		if (encontrado == 1) {
			for (j=0;j<tam;j++) {
			printf("Nome: %s\n", cad[i].lotacao);
			printf("Salario: %.2f\n", cad[i].salario);
			} 	
		
			
		}else {
				printf("Matricula inexistente\n");
		}
		
		printf("Consultar: ");
			scanf("%d", &busca);
}
		
		

	
	
	return 0;
	

}



