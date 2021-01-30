#include<stdio.h>

int main() {
	
	char nome[30];
	int idade;
	float peso, altura;
	char telefone[20];
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite seu telefone: ");
	scanf("%s", telefone);
	
	printf("Seu nome: %s\n", nome);
	printf("Sua idade: %d\n", idade);
	printf("Peso: %.2f\n", peso);
	printf("Altura: %.2f\n", altura);
	printf("Telefone: %s\n", telefone);
}
