#include<stdio.h>


int main() {
	
	int idade;
	char nome[30];
	
	scanf("%s", nome);
	scanf("%d", &idade);
	
	if ((idade >= 18) && (idade <= 64)) {
		printf("%s\n", nome);
		printf("Adulto");
	} else if (idade >= 65)  {
		printf("%s\n", nome);
		printf("Maior de idade");
		
	} else {
		
		printf("%s\n", nome);
		printf("Menor de idade");
	}
	
	return 0;
	
}
