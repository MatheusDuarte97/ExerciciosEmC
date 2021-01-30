#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	float real, dolar;
	printf("U$: ");
	scanf("%f", &dolar);
	real = dolar * 5.89;
	
	printf("Real: R$%.2f", real);
}
