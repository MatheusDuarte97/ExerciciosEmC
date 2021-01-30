#include<stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "");
	float preco, desconto, vdesconto, npreco;
	
	printf("Preço: ");
	scanf("%f", &preco);
	
	printf("Desconto: ");
	scanf("%f", &desconto);
	
	vdesconto = (desconto / 100) * preco;
	npreco = preco - vdesconto;
	
	
	printf("Valor desconto: %.2f\n", vdesconto);
	printf("Valor a pagar: %.2f\n", npreco);
}
