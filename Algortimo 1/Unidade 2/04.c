#include<stdio.h>


int main() {
	
	float novoSal,sal;
	char code;
	
	scanf("%c", &code);
	scanf("%f", &sal);
	
	
	switch (code) {
		
		case '1':
			printf("Cargo: Servicos gerais \n");
			novoSal = sal + sal * (100/50.0);
			printf("Novo salario: %.2f", novoSal);
			break;
		case '2':
			printf("Cargo: Vigia \n");
			novoSal = sal + sal * (100/30.0);
			printf("Novo salario: %.2f", novoSal);
			break;	
		case '3':
			printf("Cargo: Recepcionista \n");
			novoSal = sal + sal * (100/25.0);
			printf("Novo salario: %.2f", novoSal);	
			break;
		case '4':
			printf("Cargo: Vigia \n");
			novoSal = sal + sal * (100/15.0);
			printf("Novo salario: %.2f", novoSal);
			break;
		default:
			printf("Codigo invalido");							
	}
	
	return 0;
	
}
