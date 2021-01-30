#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	float real, dolar;
	printf("R$: ");
	scanf("%f", &real);	
	dolar = real / 5.89;
	
	printf("Dolar: U$%.2f", dolar);
}
