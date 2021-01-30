#include<stdio.h>
#include<locale.h>


int main() {
	
	setlocale(LC_ALL, "");
	
	int idade=0, cont=0;
	int estadoCivil=0, casado=0, solteiro=0, divorciado=0, viuvo=0;
	
	printf("Idade: ");
	scanf("%d", &idade);
	
	while(idade != 0) {
		printf("Estado civil:\n");
		printf("[1] - Casado(a)\n");
		printf("[2] - Solteiro(a)\n");
		printf("[3] - Divorciado\n");
		printf("[4] - Viúvo(a)\n");
		scanf("%d", &estadoCivil);
		
		switch (estadoCivil) {
			case 1:
				casado = casado + 1;
				break;
			case 2:
				solteiro = solteiro + 1;
				break;
			case 3:
				divorciado = divorciado + 1;
				break;
			case 4:
				viuvo = viuvo +1;
				break;
			default:
				printf("Opção invalida\n");	
			break;		
		}
		
		
		printf("Idade: ");
		scanf("%d", &idade);
		fflush(stdin);
	}
	
	printf("Quantidade Casado(a): %d\n", casado);
	printf("Quantidade Solteiro(a): %d\n", solteiro);
	printf("Quantidade Divorciado(a): %d\n", divorciado);
	printf("Quantidade viuvo(a): %d\n", viuvo);
}
