#include<stdio.h>

#define CRED_35 35.0

int main() {
	
	
	float salMedio, valorCredito;
	
	
	scanf("%f", &salMedio);
	
	if (salMedio < 500) {
		printf("Nao tem direito a credito");
	} else if ((salMedio >= 500) && (salMedio <= 1000)) {
		valorCredito = (CRED_35/100)*salMedio;
		printf("Porcentagem: 35%%\n");
		printf("Valor Credito: %.2f\n", valorCredito);
	} else if ((salMedio > 100) && (salMedio <= 3000)) {
		valorCredito = (50.0/100)*salMedio;
		printf("Porcentagem: 50%%\n");
		printf("Valor Credito: %.2f\n", valorCredito);	
	} else {
		valorCredito = (75.0/100)*salMedio;
		printf("Porcentagem: 75%%\n");
		printf("Valor Credito: %.2f\n", valorCredito);			
		
	}
	return 0;
	
}
