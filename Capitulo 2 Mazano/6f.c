#include<stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "");
	int a,b,aux;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);

	aux = a;
	a = b;
	b = aux;
	printf("Valor de A: %d\n", a);
	printf("Valor de B: %d", b);
	return 0;	
}

